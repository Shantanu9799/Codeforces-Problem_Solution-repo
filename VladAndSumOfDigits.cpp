#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int digitSum(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int t;
    cin >> t;
    while(t-- > 0) {
        int n;
        cin >> n;
        long long Sum = 0;
        for(int i = 1; i <= n; i++) {
            Sum += digitSum(i);
        }
        cout << Sum << endl;
    }
    return 0;
}
