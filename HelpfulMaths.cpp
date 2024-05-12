#include<iostream>
using namespace std;

string nonDecreasingSummands(string s) {
    int one = 0, two = 0, three = 0;
    for(int i = 0; i< s.size(); ++i) {
        if(s[i] == '1') one++;
        else if(s[i] == '2') two++;
        else if(s[i] == '3') three++;
    }
    int idx = 0;
    while(one--) {
        s[idx++] = '1';
        s[idx++] = '+';
    }
    while(two--) {
        s[idx++] = '2';
        s[idx++] = '+';
    }
    while(three--) {
        s[idx++] = '3';
        if(three > 0) s[idx++] = '+';
    }
    return s;
}

int main() {
    string s;
    cin >> s;
    cout << nonDecreasingSummands(s);
    return 0;
}