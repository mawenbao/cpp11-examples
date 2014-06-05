#include <iostream>
using namespace std;

int main() {
    int *pa = nullptr;      // pa is null
    bool pb = nullptr;      // pb is false
    // int  pc = nullptr;   // error: cannot convert ‘std::nullptr_t’ to ‘int’ in initialization
    cout << "pa: " << pa << endl;
    cout << "pb: " << pb << endl;
}

