#include <iostream>
using namespace std;

int main() {
    int *pa = nullptr;      // pa is null
    bool pb = nullptr;      // pb is false

    long pc = (long) nullptr; 
    //long  pc = nullptr;   // error: cannot convert ‘std::nullptr_t’ to ‘long’ in initialization

    cout << "pa: " << pa << endl;
    cout << "pb: " << pb << endl;
    cout << "pc: " << pc << endl;
}

