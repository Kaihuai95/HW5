#include <iostream>
using namespace std;

void cubeByReference(int& mPtr);

int main() {
    int number = 5;
    cout << "The original value of number is " << number << endl;

    cubeByReference(number);

    cout << "The new value of number is " << number << endl;
    system("pause");
    return 0;
}

void cubeByReference(int& mPtr) {
    mPtr = mPtr * mPtr * mPtr;
}