#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    if ((s.length() <= 1) || (s[0] != '1')) {
        cout << -1 << '\n';
    } else {
        bool flag = false;
        for (int i = 1; i < s.length(); ++i) {
            if (s[i] != '3') {
                flag = true;
                cout << -1 << '\n';
                break;
            }
        }
        if (!flag)
            cout << s.length() - 1 << '\n';
    }
}

