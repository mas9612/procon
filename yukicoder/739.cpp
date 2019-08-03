#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    if (s.length() % 2 != 0) {
        cout << "NO\n";
    } else {
        bool flag = false;
        int middle = s.length() / 2;
        for (int i = 0; i < middle; ++i) {
            if (s[i] != s[middle + i]) {
                flag = true;
                cout << "NO\n";
                break;
            }
        }
        if (!flag)
            cout << "YES\n";
    }
}

