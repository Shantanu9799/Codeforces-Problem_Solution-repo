#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int odd_count = 0, even_count = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (a[i] % 2 == 0) {
                ++even_count;
            } else {
                ++odd_count;
            }
        }
        // The minimum number of operations needed is to convert the smaller count of the two
        cout << min(odd_count, even_count) << endl;
    }
    return 0;
}
