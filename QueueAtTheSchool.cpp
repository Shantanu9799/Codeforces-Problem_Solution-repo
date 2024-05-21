#include <iostream>
#include <string>

using namespace std;

string queuePosition(int n, int t, string s) {
    while (t--) {
        for (int i = 0; i < n - 1; ++i) {
            if (s[i] == 'B' && s[i + 1] == 'G') {
                swap(s[i], s[i + 1]);
                ++i; // Skip next position to prevent immediate re-swap
            }
        }
    }
    return s;
}

int main() {
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;
    cout << queuePosition(n, t, s);
    return 0;
}
