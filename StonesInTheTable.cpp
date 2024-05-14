#include<iostream>
using namespace std;

int minimumRemoval(int n, string s) {
    int remove = 0;
    for(int i = 1; i < n; ++i) {
        if(s[i-1] == s[i]) remove++;
    }
    return remove;
}

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    cout << minimumRemoval(n, s);
    return 0;
}