#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

string removeDuplicates(const string &s) {
    unordered_set<char> seen;
    string result = "";

    for (char ch : s) {
        if (seen.find(ch) == seen.end()) {  
            result += ch;                 
            seen.insert(ch);               
        }
    }
    return result;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    cout << "String without duplicates: " << removeDuplicates(str) << endl;
    return 0;
}
