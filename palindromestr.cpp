#include <iostream>
using namespace std;

// Function to check palindrome
bool isPalindrome(string str) {
    int length = 0;

    // Find the length of the string manually
    while (str[length] != '\0') {
        length++;
    }

    // Compare characters from both ends
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            return false;
        }
    }

    return true;
}

int main() {
    string str;

    cout << "Enter a string: ";
    cin >> str;

    if (isPalindrome(str))
        cout << "The string is a palindrome." << endl;
    else
        cout << "The string is not a palindrome." << endl;

    return 0;
}
