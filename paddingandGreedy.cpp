// #include <iostream>
// using namespace std;

// class Example {
//     char a;   // 1 byte
//     int b;    // 4 bytes (but alignment will cause padding)
//     char c;   // 1 byte
// };

// int main() {
//     Example E;
//     cout << "Size of struct: " << sizeof(E) << endl;  // Output will be larger than 6 bytes
//     return 0;
// }

#include <iostream>
using namespace std;

struct WithoutGreedyAlignment {
    char a;   // 1 byte
    char c;   // 1 byte
    int b;    // 4 bytes
};

struct WithGreedyAlignment {
    int b;    // 4 bytes (largest alignment requirement placed first)
    char a;   // 1 byte
    char c;   // 1 byte
};

int main() {
    cout << "Size of WithoutGreedyAlignment struct: " << sizeof(WithoutGreedyAlignment) << endl;
    cout << "Size of WithGreedyAlignment struct: " << sizeof(WithGreedyAlignment) << endl;
    return 0;
}

// Padding in C++ (and many programming languages) is primarily used to ensure memory alignment of data structures, which helps the CPU access data more efficiently. Let's dive into the reasons for padding: