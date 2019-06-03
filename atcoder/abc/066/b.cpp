#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    int end;
    if (s.length() % 2 == 0)
        end = s.length();
    else
        end = s.length() - 1;

    for (int i = end - 2; end >= 0; i -= 2) {
        bool flag = true;
        int limit = i / 2;
        for (int i = 0; i < limit; ++i) {
            if (s[i] != s[i + limit]) {
                flag = false;
                break;
            }
        }

        if (flag) {
            cout << i << '\n';
            return 0;
        }
    }
}

