#include<bits/stdc++.h>
using namespace std;
 
string canSquare(int n, int* a) {
    long long totalArea = 0;
    for(int i = 0; i < n; i++) {
        totalArea += a[i];
    }
    if(totalArea < 0) return "NO";
 
    long long side = static_cast<long long> (sqrt(totalArea));
 
    return side * side == totalArea ? "YES" : "NO";
}
 
int main() {
    int t;
    cin >> t;
    while(t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        cout << canSquare(n, a) << endl;
    }
}


