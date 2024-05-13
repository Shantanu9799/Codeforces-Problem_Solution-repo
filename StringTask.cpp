#include<iostream>
using namespace std;

string modifiedString(string s) {
    string newStr;
    for(int i = 0; i < s.size(); ++i) {
        if(tolower(s[i])!='a' && tolower(s[i])!='e' && tolower(s[i])!='i' && tolower(s[i])!='o' && tolower(s[i])!='u' && tolower(s[i])!='y') {
            newStr +='.';
            newStr += tolower(s[i]);
        }
    }
    return newStr;
}

int main() {
    string s;
    cin >> s;
    cout << modifiedString(s);
    return 0;
}