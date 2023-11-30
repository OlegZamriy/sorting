#include <iostream>
#include <string>

using namespace std;

int countOccurrences(const string& str, char target) {
    int count = 0;
    for (char c : str) {
        if (c == target) {
            count++;
        }
    }
    return count;
}

int main() {
    string inputString;
    char targetChar;

    cout << "Enter a string: ";
    getline(cin, inputString);

    cout << "Enter the character to count: ";
    cin >> targetChar;

    int occurrences = countOccurrences(inputString, targetChar);

    cout << "The character '" << targetChar << "' occurs " << occurrences << " times in the string." << endl;

    return 0;
}
