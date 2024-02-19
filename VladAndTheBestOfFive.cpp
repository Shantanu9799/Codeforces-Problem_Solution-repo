#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t-- > 0) {
        string s;
        cin >> s;
        int freq[2] = {0};
        for(int i = 0; i < 5; i++) {
            freq[s[i] - 'A']++;
        }
        if(freq[0] > freq[1]) cout << 'A';
        else cout << 'B';
        cout << endl;
    }
    return 0;
}