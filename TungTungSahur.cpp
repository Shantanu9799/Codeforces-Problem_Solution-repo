#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string p, s;
        cin >> p >> s;

        int n = p.size(), m = s.size();

        if (m < n || m > 2 * n) {
            cout << "NO" << endl;
            continue;
        }

        int i = 0, j = 0;
        bool ok = true;

        while (i < n && j < m) {
            if (s[j] != p[i]) {
                ok = false;
                break;
            }
            int take = 0;
            while (j < m && s[j] == p[i] && take < 2) {
                j++;
                take++;
            }
            i++;
        }

        if (ok && i == n && j == m)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
