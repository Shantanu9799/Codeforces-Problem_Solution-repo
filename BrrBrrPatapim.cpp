#include <iostream>
using namespace std;

int lastMissingDigit(int n, vector<int> result) {
    int arraySum = 0;
    for(int i = 0; i < n * 2; i++) {
        arraySum += result[i];
    }
    int totalSum = ((n*2) * ((n*2) + 1)) / 2;
    return totalSum - arraySum;
}

vector<int> password(vector<vector<int>> G, int n) {
    vector<int> result(n * 2, 0);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            int idx = i + j + 1;
            result[idx] = G[i][j];
        }
    }
    result[0] = lastMissingDigit(n, result);
    return result;
}

int main() {
    // Your code here
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<vector<int>> G(n, vector<int>(n));
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cin >> G[i][j];
            }
        }
        vector<int> result = password(G, n);
        for(int i : result) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
