//
// Created by 煮茶 on 2020/3/17.
//
#include <iostream>

using namespace std;

class Tenant {
    string& name1;
    string& name2;
    string name3;

public:
    Tenant(string& n1, string n2, string n3): name1(n1), name2(n2), name3(n3){
        cout << "n1: " << &n1 << ", name1: " << &name1 << endl;
        cout << "n2: " << &n2 << ", name2: " << &name2 << endl;
        cout << "n3: " << &n3 << ", name3: " << &name3 << endl;
        cout << "Tenant default constructor: " << this << endl;
    }

    Tenant(const Tenant& rhs): name1(rhs.name1), name2(rhs.name2), name3(rhs.name3){
        cout << "Tenant copy constructor: " << this << ", src:" << &rhs << endl;
    }

    ~Tenant(){
        cout << "Tenant deconstructor" << endl;
    }

    Tenant& operator=(const Tenant& rhs){
        cout << "assignment constructor" << endl;
        name1 = rhs.name1;
        name2 = rhs.name2;
        name3 = rhs.name3;
        return *this;
    }

    void print(){
        cout << "1:" << &name1 << ", 2:" << &name2 << ", 3:" << &name3 << endl;
    }

};

Tenant foo(){
    string n1 = "1111";
    string n2 = "2222";
    string n3 = "3333";
    cout << "1:" << &n1 << ", 2:" << &n2 << ", 3:" << &n3 << endl;
    Tenant t(n1,n2,n3);
    cout << "foo :" << &t << endl;
    t.print();
    return t;
};

int main(){
    Tenant t = foo();
    cout << "main: " << &t << endl;
    t.print();
    cout << "----------" << endl;
    Tenant t2(t);
    t2.print();
    cout << "----------" << endl;
    Tenant t3 = t;
    t3.print();


    cout << "==============" << endl;
}

