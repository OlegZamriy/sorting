#include <iostream>
#include <sstream> 
using namespace std;

int main() {
    string inputString;

    cout << "Enter a string: ";
    getline(cin, inputString);

    stringstream ss(inputString);
    string word;
    int wordCount = 0;

    while (ss >> word) {
        wordCount++;
    }

    cout << "Number of words: " << wordCount << endl;

    return 0;
}
