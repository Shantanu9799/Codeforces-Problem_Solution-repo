#include<iostream>
#include<vector>
using namespace std;

int maximumPassenger(vector<vector<int> > passengers, int n) {
    int maxiPassngr = 0, currPassngr = 0;
    for(int i = 0; i < n; ++i) {
        currPassngr += (passengers[i][1] - passengers[i][0]);
        maxiPassngr = max(maxiPassngr, currPassngr);
    }
    return maxiPassngr;
}

int main() {
    int n;
    cin >> n;
    vector<vector<int> > passengers(n, vector<int> (2));
    for(int i = 0; i < n; ++i) {
        cin >> passengers[i][0] >> passengers[i][1];
    }
    cout << maximumPassenger(passengers, n);
    return 0;
}