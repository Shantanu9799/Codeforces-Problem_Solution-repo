// password should consist only of lowercase Latin letters and digits;
// there should be no digit that comes after a letter (so, after each letter, there is either another letter or the string ends);
// all digits should be sorted in the non-decreasing order;
// all letters should be sorted in the non-decreasing order.


#include<iostream>
using namespace std;

string correctPassword(int len, string password) {
    bool isOccuredChar = false;
    for(int i = 0; i < len; ++i) {
        if((password[i]>='0' && password[i]<='9' && isOccuredChar) || (password[i]>='A' && password[i]<='Z') || (i>0 && password[i]<password[i-1])) return "NO";
    }
    return "YES";
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int len;
        cin >> len;
        string password;
        cin >> password;
        cout << correctPassword(len, password) << endl;
    }
}