#include <iostream>
using namespace std;

int main() {
    int myIntArray[] {1, 2, 3, 4, 5};
    for(auto &i : myIntArray) {
        i *= 2;
    }
    for(auto i : myIntArray) {
        cout << i << endl;
    }
}

