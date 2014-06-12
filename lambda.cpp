#include <iostream>
using namespace std;

int main() {
    int total = 0;
    int a = 2;
    int b = 3;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "total: " << total << endl;
    [=, &total](int x) mutable {
        a = 10;  // change local copy of a, with mutable keyword
        total = a * x;
    } (b);
    cout << "a: " << a << endl;  // a is not changed, passed by value
    cout << "b: " << b << endl;
    cout << "total: a * b = " << total << endl;  // total is changed, passed by reference
    
    auto myGreetingsFunc = [](const char *msg) -> bool {
        cout << "Hi, " << msg << endl;
        if (msg) { 
            return true;
        } else {
            return 0;  // if -> bool is not there, this may fail to compile
        }
    };
    if (myGreetingsFunc("Tom")) {
        cout << "Well done." << endl;
    }
}

