#include<iostream>
using namespace std;

string easyOrHard(int n, int *ques) {
    for(int i = 0; i < n; ++i) {
        if(ques[i] == 1) return "HARD";
    }
    return "EASY";
}

int main() {
    int n;
    cin >> n;
    int ques[n];
    for(int i = 0; i < n; ++i) {
        cin >> ques[i];
    }
    cout << easyOrHard(n, ques);
    return 0;
}