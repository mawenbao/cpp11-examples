constexpr int size = 100;

constexpr int length() {
    return 150;
}

int main() {
    int myArr[length() + size];
    return myArr[0];
}

