#include <iostream>
#include <vector>
#include <array>
using namespace std;

class MyClass {
public:
    MyClass(int a, std::string b): _a(a), _b(b) {}
    int getA() { return _a; }
    string getB() { return _b; }
private:
    int _a;
    string _b;
};


int main() {
    MyClass myObj{250, "hello again"};
    cout << "myObj: " << myObj.getA() << " " << myObj.getB() << endl;

    int myInt{};
    cout << "myInt: " << myInt << endl;

    string myStr{"hello world"};
    cout << "myStr: " << myStr << endl;

    vector<double> myVec{1.2, 2.3};
    cout << "myVec: " << myVec[0] << " " << myVec[1] << endl;
}

