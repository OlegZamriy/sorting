#include <iostream>

using namespace std;

int main() {
    char str[100];
    int count_letters = 0;
    int count_digits = 0;
    int count_other = 0;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            count_letters++;
        }
        else if (isdigit(str[i])) {
            count_digits++;
        }
        else {
            count_other++;
        }
    }

    cout << "Number of letters: " << count_letters << endl;
    cout << "Number of digits: " << count_digits << endl;
    cout << "Number of other characters: " << count_other << endl;

    return 0;
}

