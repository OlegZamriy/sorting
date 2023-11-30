#include <iostream>
#include <string> 

using namespace std;

int main() {
    string str;
    int count_letters = 0;
    int count_digits = 0;
    int count_others = 0;

    cout << "Enter a string: ";
    getline(cin, str);

    for (char c : str) {
        if (isalpha(c)) {
            count_letters++;
        }
        else if (isdigit(c)) {
            count_digits++;
        }
        else {
            count_others++;
        }
    }

    cout << "Number of letters: " << count_letters << endl;
    cout << "Number of digits: " << count_digits << endl;
    cout << "Number of other characters: " << count_others << endl;

    return 0;
}
