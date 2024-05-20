#include<iostream>
using namespace std;

int wrongSubtraction(int n, int k) {
    if(k == 0) return n;
    if((n % 10) != 0) return wrongSubtraction(n-1, k-1);
    return wrongSubtraction(n/10, k-1);
}

int main() {
    int n, k;
    cin >> n >> k;
    cout << wrongSubtraction(n, k);
    return 0;
}