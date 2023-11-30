#include <iostream>
#include <string>

using namespace std;

string removeCharacterAt(string str, int index) {
    if (index >= 0 && index < str.length()) {
        str.erase(index, 1);
    }
    return str;
}

int main() {
    string inputString;
    int indexToRemove;

    cout << "Enter a string: ";
    cin >> inputString;

    cout << "Enter the index of the character to remove: ";
    cin >> indexToRemove;

    string result = removeCharacterAt(inputString, indexToRemove);

    cout << "Resulting string: " << result << endl;

    return 0;
}
