#include <iostream>
using namespace std;

// function to find the house on mth day
pair<int, int> findHouse(int n, int m, int l, int r) {
    pair<int, int> house(0, 0);
    char coOrd = 'x';
    while(m) {
        if(coOrd == 'x') {
            if(house.first - 1 >= l) {
                house.first--;
                m--;
            }
            coOrd = 'y';
        } else {
            if(house.second + 1 <= r) {
                house.second++;
                m--;
            }
            coOrd = 'x';
        }
    }
    return house;
}

int main() {
    // Your code here
    int t;
    cin >> t;
    while(t--) {
        int n, m, l, r;
        cin >> n >> m >> l >> r;
        pair<int, int> result = findHouse(n, m, l, r);
        cout << result.first << " " << result.second << endl;
    }
    return 0;
}
