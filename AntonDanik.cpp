#include<iostream>
using namespace std;

string whoWins(int n, string game) {
    int a = 0, d = 0;
    for(size_t i = 0; i < n; ++i) {
        if(game[i] == 'A') a++;
        else d++;
    }
    if(a > d) return "Anton";
    else if(d > a) return "Danik";
    return "Friendship";
}

int main() {
    int n;
    cin >> n;
    string game;
    cin >> game;
    cout << whoWins(n, game);
    return 0;
}