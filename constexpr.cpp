#include <iostream>
using namespace std;

constexpr int size = 100 + 50;

constexpr int length() {
    return 100;
}

int main() {
    int myArr[length() + size];
    cout << sizeof (myArr) / sizeof (int) << " " << myArr[0] << endl;
}

