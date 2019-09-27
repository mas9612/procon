#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    bool flag = true;
    for (int i = 1; i < s.length(); ++i) {
        if (s[i - 1] == s[i]) {
            flag = false;
            break;
        }
    }

    if (flag)
        cout << "Good\n";
    else
        cout << "Bad\n";
}

