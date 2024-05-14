#include<iostream>
using namespace std;

string convertToLower(string s) {
    for(int i = 0; i < s.size(); ++i) {
        s[i] = tolower(s[i]);
    }
    return s;
}

string convertToUpper(string s) {
    for(int i = 0; i < s.size(); ++i) {
        s[i] = toupper(s[i]);
    }
    return s;
}

string extensionWord(string s) {
    int lower = 0, upper = 0;
    for(int i = 0; i < s.size(); ++i) {
        if(s[i] >= 'a' && s[i] <= 'z') lower++;
        else upper++;
    }
    if(lower >= upper) {
        s = convertToLower(s);
    } else {
        s = convertToUpper(s);
    }
    return s;
}

int main() {
    string s;
    cin >> s;
    cout << extensionWord(s);
    return 0;
}