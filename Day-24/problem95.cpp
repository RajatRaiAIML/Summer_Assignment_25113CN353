#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    string longest = "";
    string current = "";

    for (char ch : sentence) {
        if (ch != ' ') {
            current += ch;
        } else {
            if (current.length() > longest.length()) {
                longest = current; 
            }
            current = "";
        }
    }

    
    if (current.length() > longest.length()) {
        longest = current;
    }

    cout << "Longest word: " << longest << endl;
    return 0;
}
