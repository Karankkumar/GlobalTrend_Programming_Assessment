// Write a function to check if a given string contains only alphabetic characters.The function should return true if the string contains only alphabetic characters, and false otherwise.
#include <bits/stdc++.h>
using namespace std;

void isAlphabetic(string &str) {
    for (char ch : str) {
        if (!isalpha(ch)) {
            cout << "false" << endl;
            return;
        }
    }
    cout << "true" << endl;
    
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    isAlphabetic(s);

    
}
