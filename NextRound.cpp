#include<iostream>
#include<vector>
using namespace std;

int qualifiedContestent(int n, int k, vector<int> v) {
    // declearing a variable to keep track
    int con = 0;
    // finding the value of the k-th place
    int cutOff = v[k];
    // if the value doesn't hold the 0 value, maybe in right side, there might present same value with cut off 
    if(cutOff > 0) {
        // first hold the contestent number till now
        con = k < n ? k+1 : k;
        // find if there present any value with same as cut off
        for(int i = k+1; i < n; ++i) {
            if(v[i] != cutOff) break;
            con++;
        }
    }
    // if the cut off value becomes 0
    // go to left side to find value greater than 0
    else {
        for(int i = k-1; i >= 0; --i) {
            // if find any add the count
            if(v[i] > 0) con++;
        }
    }
    // return tha calculated value
    return con;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    cout << qualifiedContestent(n, k, v);
    return 0;
}