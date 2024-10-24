#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int t;
    cin >> t;  // Number of test cases

    while (t--) {
        int n;
        cin >> n;  // Length of the line of students
        vector<int> a(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];  // Topics of interest for each student
        }

        int disturbance = 0;
        vector<int> disturbance_indices;

        // Count the number of disturbances (consecutive same topics)
        for (int i = 0; i < n - 1; i++) {
            if (a[i] == a[i + 1]) {
                disturbance++;
                disturbance_indices.push_back(i);
            }
        }

        // If no disturbance, no need to do anything
        if (disturbance == 0) {
            cout << 0 << endl;
            continue;
        }

        // Handle cases where there is at least one disturbance
        int first = disturbance_indices[0];
        int last = disturbance_indices.back();

        // If there's only one disturbance block
        if (last - first < 2) {
            cout << 1 << endl;
        } else {
            cout << max(1, last - first - 1) << endl;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}
