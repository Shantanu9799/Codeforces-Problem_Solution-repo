#include<iostream>
using namespace std;

int minimumElephantSteps(int x) {
    int totalStepsCount = 0;
    int steps = 5;
    while(steps) {
        int stepsCount = (x / steps);
        totalStepsCount += stepsCount;
        x -= (stepsCount * steps);
        // cout << "Step = " << steps << endl << "Steps Count = " << stepsCount << endl << "Total Steps Count = " << totalStepsCount << endl << "X = " << x << endl;
        if(x == 0) break;
        steps--;
    }
    return totalStepsCount;
}

int main() {
    int x;
    cin >> x;
    cout << minimumElephantSteps(x);
    return 0;
}