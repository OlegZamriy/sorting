#include <iostream>
#include <string>

using namespace std;

int main() {
    string inputString;

    cout << "Enter a string: ";
    getline(cin, inputString);

    for (char& c : inputString) {
        if (c == '.') {
            c = '!';
        }
    }

    cout << "Resulting string: " << inputString << endl;

    return 0;
}
