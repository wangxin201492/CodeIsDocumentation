//
// Created by 煮茶 on 2020/3/17.
//

#include <iostream>

using namespace std;

namespace cpp_test {
class Pool {
    static constexpr int MAX_POOL_SIZE = 100;

    struct Options {
        int maxSize{100};

        Options() {
            cout << "Options default constructor" << endl;
        }

        Options(const Options &rhs) {
            cout << "Options copy constructor" << endl;
        }

        Options &operator=(const Options &rhs) {
            cout << "Options assign constructor" << endl;
            return *this;
        }
    };

    struct Stats {
        int currentSize{0};
    };

public:
    Options opts;
    Stats stats;

};
}
int main() {
    cpp_test::Pool pool1;
    std::cout << pool1.opts.maxSize;
    return 0;
}




