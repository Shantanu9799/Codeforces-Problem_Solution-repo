#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int maxProduct(int *digits, int n) {
    int product = 1;
    int num[10] = {0};
    bool haveZero = false;
    for(int i = 0; i < n; i++) {
        if(digits[i] == 0) haveZero = true;
        else {
            product *= digits[i];
            num[digits[i]] = 1;
        }
    } 
    if(haveZero) return product;
    int maxProduct = product;
    for(int i = 1; i < 10; i++) {
        if(num[i] != 0) {
            maxProduct = max(maxProduct, (product/i)*(i+1));
        }
    }
    return maxProduct;
}

int main() {
    int t;
    cin >> t;
    while(t-- > 0) {
        int n;
        cin >> n;
        int digits[n];
        for(int i = 0; i < n; i++) {
            cin >> digits[i];
        }
        cout << maxProduct(digits, n) << endl;
    }
    return 0;
}