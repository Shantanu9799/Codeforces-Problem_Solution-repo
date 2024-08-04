#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        // Sort the installation times
        sort(a.begin(), a.end());
        
        int max_delay = 0;
        
        // Calculate the delay required for each light to turn on simultaneously
        for (int i = 0; i < n; ++i) {
            int delay = (i + 1) * k - a[i];
            max_delay = max(max_delay, delay);
        }
        
        // The earliest time when all lights will be on simultaneously
        int result = max_delay + a[n - 1];
        cout << result << endl;
    }
    return 0;
}
