#include<iostream>
using namespace std;

int numberOfProblems(int teamArray[][3], int n) {
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        int currOne = 0;
        for(int j = 0; j < 3; j++) {
            if(teamArray[i][j] == 1) currOne++;
        }
        if(currOne >= 2) cnt++;
    }

    return cnt;

}

int main() {

    int n;
    cin >> n;
    int teamArray[n][3];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> teamArray[i][j];
        }
    }

    cout << numberOfProblems(teamArray, n);

    return 0;
}