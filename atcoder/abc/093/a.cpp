#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    const int len = 3;
    bool cannot = false;
    for (int i = 'a'; i <= 'c'; ++i) {
        bool found = false;
        for (int j = 0; j < len; ++j) {
            if (s[j] == i) {
                found = true;
                break;
            }
        }
        if (!found) {
            cannot = true;
            break;
        }
    }

    if (cannot)
        cout << "No\n";
    else
        cout << "Yes\n";
}
