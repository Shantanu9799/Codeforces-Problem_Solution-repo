#include<bits/stdc++.h>
#include <iostream>
#include <set>
#include <queue>
using namespace std;

// different string possible or not
void diffString(string s) {
    set<char> Set;
    for(string::size_type i = 0; i < s.size(); ++i) {
        Set.insert(s[i]);
    }
    if(Set.size() > 1) {
        for(string::size_type i = 0; i < s.size() - 1; ++i) {
            if(s[i] != s[i+1]) {
                swap(s[i], s[i+1]);
                break;
            }
        }
        cout << "YES" << endl << s << endl;
    } else {
        cout << "NO" << endl;
    }
}


// main function
int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        diffString(s);
    }
}