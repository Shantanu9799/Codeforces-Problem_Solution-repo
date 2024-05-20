#include<iostream>
using namespace std;

string isCorrectlyTranslated(string berland , string birland) {
    int n = berland.size();
    for(int i = 0; i < n; ++i) {
        if(berland[i] != birland[n-i-1]) return "NO";
    }
    return "YES";
}

int main() {
    string berland, birland;
    cin >> berland >> birland;
    cout << isCorrectlyTranslated(berland, birland);
    return 0;
}