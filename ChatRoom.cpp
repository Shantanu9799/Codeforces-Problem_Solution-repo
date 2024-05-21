#include <iostream>
using namespace std;

string isManageToSayHello(string chat) {
    string hello = "hello";
    int j = 0;

    for (int i = 0; i < chat.size(); ++i) {
        if (chat[i] == hello[j]) {
            ++j;
            if (j == hello.size()) {
                return "YES";
            }
        }
    }
    return "NO";
}

int main() {
    string chat;
    cin >> chat;
    cout << isManageToSayHello(chat);
    return 0;
}
