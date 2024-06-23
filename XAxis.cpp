#include<iostream>
using namespace std;

int smallestValueFa(int x1, int x2, int x3) {
    int f = abs(x1 - x1) +  abs(x2 - x1) + abs(x3 - x1);
    int s = abs(x1 - x2) +  abs(x2 - x2) + abs(x3 - x2);
    int t = abs(x1 - x3) +  abs(x2 - x3) + abs(x3 - x3);
    return min(f, min(s, t));
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int x1, x2, x3;
        cin >> x1 >> x2 >> x3;
        cout << smallestValueFa(x1, x2, x3) << endl;
    }
    return 0;
}