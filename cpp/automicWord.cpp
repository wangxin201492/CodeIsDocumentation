#include <thread>
#include <atomic>
#include <iostream>
using namespace std;
atomic<int> a;
atomic<int> b;

void Thread1_relaxed(int)
{
    int t = 1;
    a.store(t, memory_order_relaxed);
    b.store(2, memory_order_relaxed);
}

void Thread2_relaxed(int)
{
    while (b.load(memory_order_relaxed) != 2)
        ; //自旋等待
    cout << a.load(memory_order_relaxed) << endl;
}

void Thread1_release(int)
{
    int t = 1;
    a.store(t, memory_order_relaxed);
    b.store(2, memory_order_release); //本原子操作前所有的写原子操作必须完成
}
void Thread2_accquire(int)
{
    while (b.load(memory_order_acquire) != 2)
        ;                                         //本原子操作必须完成才能执行之后所有的读原子操作
    cout << a.load(memory_order_relaxed) << endl; //1
}

int main()
{
    {
        thread t1_relaxed(Thread1_relaxed, 0);
        thread t2_relaxed(Thread2_relaxed, 0);
        t1_relaxed.join();
        t2_relaxed.join();
    }

    cout << endl << "release&accquire" << endl;

    {
        thread t1_release(Thread1_release, 0);
        thread t2_accquire(Thread2_accquire, 0);
        t1_release.join();
        t2_accquire.join();
    }
    return 0;
}