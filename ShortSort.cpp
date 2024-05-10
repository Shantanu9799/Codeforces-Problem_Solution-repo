#include<iostream>
using namespace std;

string isPossible(string &s) {
    string req = "abc";
    int cnt = 0;
    for(int i = 0; i < 3; i++) {
        if(s[i] != req[i]) cnt++;
    }
    return cnt<=2 ? "YES" : "NO";
}

int main() {
    int t;
    cin >> t;
    while(t-- > 0) {
        string s;
        cin >> s;
        cout << isPossible(s) << endl;
    }
    return 0;
}