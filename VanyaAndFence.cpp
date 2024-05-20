#include<iostream>
using namespace std;

int requiredWidth(int n, int* heights, int h) {
    int width = 0;
    for(int i = 0; i < n; ++i) {
        if(heights[i] > h) width += 2;
        else width++; 
    }
    return width;
}

int main() {
    int n, h;
    cin >> n >> h;
    int heights[n];
    for(int i = 0; i < n; ++i) {
        cin >> heights[i];
    }
    cout << requiredWidth(n, heights, h);
    return 0;
}