#include <iostream>

using namespace std;

// pass by value -- not suitable
void swap(int a, int b) {
    int c;
    c = a;
    a = b;
    b = c;
}


// pass by address
void newSwap(int *a, int *b) {
    int c = *a;
    *a = *b;
    *b = c;

}

// pass by reference
void refSwap (int &a, int &b) {
    int c = a;
    a = b;
    b = c;

}

int main() {

    // pass by value

    int num1 = 10, num2 = 15;

    cout << "num1 is " << num1 << " and num2 is " << num2 << ".\n";

    swap(num1, num2);

    cout << "Passing by value.\n";

    cout << "num1 is " << num1 << " and num2 is " << num2 << ".\n";

    // call by address
    newSwap(&num1, &num2);

    cout << "Passing by address.\n";

    cout << "num1 is " << num1 << " and num2 is " << num2 << ".\n";

    num1 = 10, num2 = 15;

    cout << "num1 reset to " << num1 << " and num2 reset to " << num2 << ".\n";

    cout << "Passing by reference (C++ only, not C).\n";

    refSwap(num1, num2);

    cout << "num1 is " << num1 << " and num2 is " << num2 << ".\n";
    return 0;
}
