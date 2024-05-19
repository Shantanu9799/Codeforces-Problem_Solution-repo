#include<iostream>
using namespace std;

string isLuckyNumber(unsigned long long int num) {
    int luckyNums = 0;
    while(num > 0) {
        if(num%10 == 4 || num%10 == 7) luckyNums++;
        num /= 10;
    }
    return (luckyNums==4 || luckyNums==7) ? "YES" : "NO";
}

int main() {
    unsigned long long int num;
    cin >> num;
    cout << isLuckyNumber(num);
    return 0;
}