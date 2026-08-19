#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, original, remainder, digits = 0;
    int sum = 0;

    cout << "Enter an integer: ";
    cin >> n;

    original = n;

    // Count the number of digits
    int temp = n;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    // Calculate the Armstrong sum
    temp = n;
    while (temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, digits);
        temp /= 10;
    }

    // Check
    if (sum == original)
        cout << original << " is an Armstrong number.";
    else
        cout << original << " is not an Armstrong number.";

    return 0;
}