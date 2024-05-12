#include<iostream>
using namespace std;

string determineGender(string s) {
    int freq[26] = {0};
    for(int i = 0; i < s.size(); ++i) {
        freq[s[i] - 'a']++;
    }
    int cnt = 0;
    for(int i = 0; i < 26; ++i) {
        if(freq[i] == 1) cnt++;
    }
    return ((cnt & 1) == 1) ? "IGNORE HIM" : "CHAT WITH HER";
}

int main() {
    string s;
    cin >> s;
    cout << determineGender(s);
    return 0;
}