#include <bits/stdc++.h>
#include <iostream>
using namespace std;

string twoGram(string s) {
    unordered_map<string, int> mpp;
    for(int i = 0; i <= s.size()-2; i++) {
        mpp[s.substr(i, 2)]++;
    }

    string tg = "";
    int freq = 0;

    for(auto it : mpp) {
        if(it.second > freq) {
            freq = it.second;
            tg = it.first;
        }
    }

    return tg;

}

int main() {
    int n;
    string s;
    cin >> n >> s;
    cout << twoGram(s) << endl;
    return 0;
}