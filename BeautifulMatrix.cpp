#include<iostream>
#include<vector>
using namespace std;

int minimumSwapping(vector<vector<int> > mat) {
    int idxI = -1, idxJ = -1;
    for(int i = 0; i < 5; ++i) {
        for(int j = 0; j < 5; ++j) {
            if(mat[i][j] == 1) {
                idxI = i; idxJ = j;
                break;
            }
        }
    }
    return (abs(idxI - 2) + abs(idxJ - 2));
}

int main() {
    // 5X5 matrix
    vector<vector<int> > mat(5, vector<int>(5));
    for(int i = 0; i < 5; ++i) {
        for(int j = 0; j < 5; ++j) cin >> mat[i][j];
    }
    cout << minimumSwapping(mat);
}