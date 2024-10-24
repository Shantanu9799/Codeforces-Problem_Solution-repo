// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// void solve() {
//     int t;
//     cin >> t;  // Number of test cases

//     while (t--) {
//         int n;
//         cin >> n;  // Size of the matrix
//         vector<vector<int> > a(n, vector<int>(n));

//         // Input the matrix
//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < n; j++) {
//                 cin >> a[i][j];
//             }
//         }

//         int total_operations = 0;

//         // Process all diagonals of different lengths
//         for (int len = 1; len <= n; len++) {
//             // For each diagonal of length 'len', we check all possible starting points
//             for (int i = 0; i <= n - len; i++) {
//                 for (int j = 0; j <= n - len; j++) {
//                     // Traverse the main diagonal of the current square submatrix
//                     for (int k = 0; k < len; k++) {
//                         if (a[i + k][j + k] < 0) {
//                             total_operations += abs(a[i + k][j + k]);
//                             a[i + k][j + k] = 0;  // After incrementing, set the element to 0
//                         }
//                     }
//                 }
//             }
//         }

//         // Output the result for the current test case
//         cout << total_operations << endl;
//     }
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);

//     solve();

//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int t;
    cin >> t;  // Number of test cases

    while (t--) {
        int n;
        cin >> n;  // Size of the matrix
        vector<vector<int> > a(n, vector<int>(n));

        // Input the matrix
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[i][j];
            }
        }

        int total_operations = 0;

        // Only process the main diagonal of all possible square submatrices
        for (int len = n; len >= 1; len--) {  // Length of the diagonal from n to 1
            for (int i = 0; i <= n - len; i++) {  // Starting point of the diagonal
                for (int j = 0; j <= n - len; j++) {
                    // Traverse the diagonal and count necessary increments
                    for (int k = 0; k < len; k++) {
                        if (a[i + k][j + k] < 0) {
                            total_operations += -a[i + k][j + k];  // Add the negative value to make it non-negative
                            a[i + k][j + k] = 0;  // Set it to 0 after operation
                        }
                    }
                }
            }
        }

        // Output the result for the current test case
        cout << total_operations << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}

