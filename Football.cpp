#include<iostream>
using namespace std;

string isDangerous(string &player) {
    int zeroPlyr = 0, onePlyr = 0;
    for(size_t i = 0; i < player.size(); ++i) {
        if(player[i] == '0') {
            zeroPlyr++;
            if(zeroPlyr == 7) return "YES";
            onePlyr = 0;
        } else {
            onePlyr++;
            if(onePlyr == 7) return "YES";
            zeroPlyr = 0;
        }
    }
    return "NO";
}

int main() {
    string players;
    cin >> players;
    cout << isDangerous(players);
    return 0;
}
