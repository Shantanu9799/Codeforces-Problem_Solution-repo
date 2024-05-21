#include<iostream>
#include<set>
using namespace std;

int nextBeautifulYear(int year) {
    if(year>=1987 && year<2013) return 2013;
    bool flag = true;
    while(flag) {
        ++year;
        int tmp = year;
        set<int> s;
        while(tmp > 0) {
            s.insert(tmp%10);
            tmp /= 10;
        }
        if(s.size() == 4) flag = false;
    }
    return year;
}

int main() {
    int year;
    cin >> year;
    cout << nextBeautifulYear(year);
    return 0;
}