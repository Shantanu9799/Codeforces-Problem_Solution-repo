#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        // taking input
        int x, y;
        cin >> x >> y;
        // min max
        cout << min(x, y) << " " << max(x, y) << endl;
    }
}