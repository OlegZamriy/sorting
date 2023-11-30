#include <iostream>
#include <cctype>
#include <sstream> 

using namespace std;

bool isPalindrome(const string& str) {
    int start = 0;
    int end = str.length() - 1;

    while (start < end) {
        while (!isalnum(str[start]) && start < end) {
            start++;
        }

        while (!isalnum(str[end]) && start < end) {
            end--;
        }

        if (tolower(str[start]) != tolower(str[end])) {
            return false; 
        }

        start++;
        end--;
    }

    return true; 
}

int main() {
    string inputString;

    cout << "Enter a string: ";
    getline(cin, inputString);

    if (isPalindrome(inputString)) {
        cout << "The string is a palindrome." << endl;
    }
    else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
