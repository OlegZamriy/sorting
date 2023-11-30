#include <iostream>
#include <string>

using namespace std;

string insertCharacterAt(string str, char character, int position) {
    if (position >= 0 && position <= str.length()) {
        str.insert(position, 1, character);
    }
    return str;
}

int main() {
    string inputString;
    char charToInsert;
    int position;

    cout << "Enter a string: ";
    cin >> inputString;

    cout << "Enter the character to insert: ";
    cin >> charToInsert;

    cout << "Enter the position to insert the character: ";
    cin >> position;

    string result = insertCharacterAt(inputString, charToInsert, position);

    cout << "Resulting string: " << result << endl;

    return 0;
}
