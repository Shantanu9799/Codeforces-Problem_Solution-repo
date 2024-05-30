#include<iostream>
using namespace std;

int f(int n) {
    int odd = 0, even = 0;
    for(int i = 1; i <= n; ++i) {
        if((i & 1) == 1) odd += i;
        else even += i;
    }
    return even - odd;
}

int main() {
    int n;
    cin >> n;
    cout << f(n);
    return 0;
}