#include <iostream>
using namespace std;

string WordAbbr(string word) {
    if (word.size() > 10) {
        word = word[0] + to_string(word.size() - 2) + word[word.size() - 1];
    }
    return word;
}

int main() {
    int t;
    cin >> t;

    while (t) {
        string word;
        cin >> word;
        cout << WordAbbr(word) << endl;
        t--;
    }

    return 0;
}
