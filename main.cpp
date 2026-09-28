#include <iostream>

using namespace std;

int main() {
    bool aok = false;

    string word;
    cout << "Type word or sentance:" << endl;
    getline(cin, word);

    char symbol;
    cout << "Type symbol and program will check, if this symbol is in line" << endl;
    cin >> symbol;

    cout << "Your symbol:" << " " << symbol << endl;

    for (int i = 0; i < word.length(); i++) {
        if (word[i] == symbol) {
            aok = true;
            break;
        }
        else {
            aok = false;
        }
    }

    if (aok == true)
        cout << "There is your symbol in the line" << endl;
    if (aok == false)
        cout << "There isn't your symbol in the line" << endl;

    return 0;
}