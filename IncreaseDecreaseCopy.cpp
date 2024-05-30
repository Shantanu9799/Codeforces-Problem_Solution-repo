#include<iostream>
#include<vector>
using namespace std;

int minimumOperation(int n, vector<int> a, vector<int> b) {
    int operation = 1, lastEle = b[n], diff = INT_MAX;
    bool anyGreaterEleThanLastEle = false;
    for(int i = 0; i < n; ++i) {
        if(a[i] >= lastEle) anyGreaterEleThanLastEle = true;
        int currDiff = abs(lastEle - a[i]);
        operation += abs(a[i] - b[i]);
        if(currDiff < diff) {
            diff = currDiff;
            
        }
    }
    // cout << "Current diff = " << diff << endl;
    return anyGreaterEleThanLastEle ? operation : operation+diff;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n+1);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for(int i = 0; i <= n; i++) {
            cin >> b[i];
        }
        cout << minimumOperation(n, a, b) << endl;
    }
}