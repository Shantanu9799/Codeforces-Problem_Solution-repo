#include<iostream>
using namespace std;

int borrowedMoney(int k, long long n, int w) {
    long long reqMoney = 0;
    for(int i = 1; i <= w; ++i) {
        reqMoney += (k * i);
    }
    int neededMoney = (reqMoney - n);
    return max(0, neededMoney);
}

int main() {
    int k, w;
    long long n;
    cin >> k >> n >> w;
    cout << borrowedMoney(k, n, w);
    return 0;
}