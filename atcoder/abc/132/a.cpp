#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    int appear[26];
    for (int i = 0; i < 26; ++i)
        appear[i] = 0;

    for (int i = 0; i < s.length(); ++i)
        ++appear[s[i] - 'A'];

    bool flag = true;
    for (int i = 0; i < 26; ++i) {
        if (appear[i] != 0 && appear[i] != 2) {
            flag = false;
            break;
        }
    }
    if (flag)
        cout << "Yes\n";
    else
        cout << "No\n";
}

