#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        if((n & 1) == 1) {
            cout << "Kosuke" << endl;
        } else {
            cout << "Sakurako" << endl;
        }
    }
}