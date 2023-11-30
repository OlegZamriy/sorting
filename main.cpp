#include <iostream>
#include <string>

using namespace std;

string removeCharacter(string str, char target) {
    str.erase(remove(str.begin(), str.end(), target), str.end());
    return str;
}

int main() {
    string inputString;
    char charToRemove;

    cout << "Enter a string: ";
    cin >> inputString;

    cout << "Enter the character to remove: ";
    cin >> charToRemove;

    string result = removeCharacter(inputString, charToRemove);

    cout << "Resulting string: " << result << endl;

    return 0;
}
