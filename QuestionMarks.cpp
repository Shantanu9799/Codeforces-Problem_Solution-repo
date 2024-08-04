#include<stdio.h>
#include <iostream>
using namespace std;

int maximumScore(int n, string s) {
    int freq[4] = {0};
    for(int i = 0; i < (4 * n); ++i) {
        if(s[i] != '?') freq[s[i] - 'A']++;
    }
    int totalScore = 0;
    for(int i = 0; i < 4;  ++i) {
        totalScore += min(freq[i], n);
    }
    return totalScore;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << maximumScore(n, s) << endl;
    }
    return 0;
}