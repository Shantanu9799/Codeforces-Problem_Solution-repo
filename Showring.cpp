#include <iostream>
#include <vector>
using namespace std;

string willBeAbleToTakeShower(int n, int s, int m, vector<vector<int> > tasks) {
    vector<int> totalDay(m+1, 1);
    
    // Mark the busy intervals as 0
    for(int i = 0; i < n; ++i) {
        int l = tasks[i][0], r = tasks[i][1];
        for(int j = l; j < r; ++j) { // Note: strictly less than r to mark the busy times correctly
            totalDay[j] = 0;
        }
    }
    
    // Check for a free interval of length at least s
    int freeTime = 0;
    for(int i = 0; i <= m; ++i) {
        if(totalDay[i]) freeTime++;
        else freeTime = 0; // reset the free time counter if it's busy
        if(freeTime >= s) return "YES";
    }
    return "NO";
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, s, m;
        cin >> n >> s >> m;
        vector<vector<int> > tasks(n, vector<int>(2));
        for(int i = 0; i < n; ++i) {
            cin >> tasks[i][0] >> tasks[i][1];
        }
        cout << willBeAbleToTakeShower(n, s, m, tasks) << endl;
    }
    return 0;
}
