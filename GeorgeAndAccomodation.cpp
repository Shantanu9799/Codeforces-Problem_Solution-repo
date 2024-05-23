#include<iostream>
#include<vector>
using namespace std;

int numberOfDormsAvailable(int n, vector<vector<int> > dorms) {
    int count = 0;
    for(int i = 0; i < n; ++i) {
        if((dorms[i][1] - dorms[i][0]) >= 2) count++;
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    vector<vector<int> > dorms(n, vector<int>(2));
    for(int i = 0; i < n; ++i) {
        cin >> dorms[i][0] >> dorms[i][1];
    }
    cout << numberOfDormsAvailable(n, dorms);
    return 0;
}