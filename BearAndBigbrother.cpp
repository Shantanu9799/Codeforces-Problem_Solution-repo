#include<iostream>
using namespace std;

int requiredYears(int limak, int bob) {
    int years = 0;
    while(limak <= bob) {
        years++;
        limak *= 3;
        bob *= 2;
    }
    return years;
}

int main() {
    int limak, bob;
    cin >> limak >> bob;
    cout << requiredYears(limak, bob);
    return 0;
}