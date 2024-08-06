#include<iostream>
using namespace std;

int digitSum(int num) {
    int digit = num % 10;
    num /= 10;
    return num + digit;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int num;
        cin >> num;
        cout << digitSum(num) << endl;
    }
    return 0;
}