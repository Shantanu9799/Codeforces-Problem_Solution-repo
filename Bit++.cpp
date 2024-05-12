#include<iostream>
#include<vector>
using namespace std;

int chnagedNumber(int n, vector<string> &v, int x) {
    for(string st : v) {
        if(st == "X++") x++;
        else if(st == "++X") ++x;
        else if(st == "X--") x--;
        else if(st == "--X") --x;
    }
    return x;
}

int main() {
    int n;
    cin >> n;
    vector<string> v(n);
    for(int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    cout << chnagedNumber(n, v, 0);
    return 0;
}