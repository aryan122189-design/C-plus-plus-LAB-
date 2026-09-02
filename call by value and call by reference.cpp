#include <iostream>
using namespace std;

void callByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside call by value: " << a << " " << b << endl;
}

void callByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside call by reference: " << a << " " << b << endl;
}

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Before call by value: " << a << " " << b << endl;
    callByValue(a, b);
    cout << "After call by value: " << a << " " << b << endl;

    cout << "Before call by reference: " << a << " " << b << endl;
    callByReference(a, b);
    cout << "After call by reference: " << a << " " << b << endl;

    return 0;
}
