#include<iostream>
using namespace std;

int numberOfWays(int a1, int a2, int b1, int b2) {
    int ways = 0;
    // Possible outcomes of 2 rounds:
    int suneetWins[4] = {0, 0, 0, 0}; // Holds counts of rounds Suneet wins in each possible game

    // 1st way: (a1 vs b1) and (a2 vs b2)
    if(a1 > b1) suneetWins[0]++;
    if(a2 > b2) suneetWins[0]++;
    
    // 2nd way: (a1 vs b2) and (a2 vs b1)
    if(a1 > b2) suneetWins[1]++;
    if(a2 > b1) suneetWins[1]++;
    
    // 3rd way: (a2 vs b1) and (a1 vs b2)
    if(a2 > b1) suneetWins[2]++;
    if(a1 > b2) suneetWins[2]++;
    
    // 4th way: (a2 vs b2) and (a1 vs b1)
    if(a2 > b2) suneetWins[3]++;
    if(a1 > b1) suneetWins[3]++;
    
    // Count the number of ways Suneet wins more rounds
    for (int i = 0; i < 4; ++i) {
        if (suneetWins[i] > 1) {
            ways++;
        }
    }
    
    return ways;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
        cout << numberOfWays(a1, a2, b1, b2) << endl;
    }
    return 0;
}