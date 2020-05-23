#include <iostream>

using namespace std;

int main() {
    /**
     * 数据类型	字节大小	数值范围
     * short int              (短整型）	        2 字节	-32 768 〜+32 767
     * unsigned short int     (无符号短整型）	    2 字节	0 〜+65 535
     * int                    (整型)	            4 字节	-2 147 483 648 〜+2 147 483 647
     * unsigned int           (无符号整型）	    4 字节	0 〜4 294 967 295
     * 'long int              (长整型）	        4 字节	-2 147 483 648 〜+2 147 483 647
     * unsigned long int      (无符号长整型）	    4 字节	0 〜4 294 967 295
     * long long int          (超长整型）	        8字节	-9 223 372 036 854 775 808~9 223 372 036 854 775 807
     * unsigned long long int (无符号超长整型）	8字节	048 446 744 073 709 551 615
     */
    uint32_t a = 1;
    uint32_t b = 2;
    uint32_t c = -1;
    int32_t d = -2147483637;
    int32_t e = 2147483637;
    cout << "d - e: " << d-e << endl;
    cout << "a: " << a << endl;
    cout << "c: " << c << endl;
    if (a - b == -1) {
        a = 3;
    }
    cout << "a: " << a << endl;
    cout << "a-c: " << a-c << endl;
    cout << "INT32_MAX: " << INT32_MAX << ", INT32_MIN: " << INT32_MIN << endl;
    cout << "INT64_MAX: " << INT64_MAX << ", INT64_MIN: " << INT64_MIN << endl;
    cout << "UINT32_MAX: " << UINT32_MAX << ", UINT64_MAX: " << UINT64_MAX << endl;
    static const int64_t COUNTER_MAX = 1ULL << 60;
    cout << "COUNTER_MAX: " << COUNTER_MAX << endl;
    cout << "INT64_MAX / ( 1ULL << 60 ) : " << INT64_MAX / COUNTER_MAX << endl;
    cout << endl << endl;
    cout << "type transfer" << endl << endl;


    {
        cout << "uint32_t to int" << endl;
        uint32_t numU32 = 2147483648 + 10000;
        cout << "uint32_t: " << numU32 << " --> int32_t: " << (int) numU32 << endl;
        numU32 = 10000;
        cout << "uint32_t: " << numU32 << " --> int32_t: " << (int) numU32 << endl;

        int32_t num32 = 10000;
        cout << "int32_t: " << num32 << " --> uint32_t: " << (uint32_t) num32 << endl;
        num32 = -1;
        cout << "int32_t: " << num32 << " --> uint32_t: " << (uint32_t) num32 << endl;
        cout << endl << endl;
    }

    {
        int64_t numLong = -1;
        cout << "numLong: " << numLong << " --> num(uint64_t): " << (uint64_t) numLong << endl;
        uint64_t numU64 = 9223372036854775807 + 10000;
        cout << "uint64_t: " << numU64 << " --> int64_t: " << (int64_t) numU64 << endl;

    }


    return 0;
}