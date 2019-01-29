#include <iostream>
#include <string>

using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    int length = s.length();
    for (int offset = 0; offset < length; ++offset) {
        bool flag = true;
        for (int i = 0; i < length; ++i) {
            if (s[(i + offset) % length] != t[i]) {
                flag = false;
                break;
            }
        }
        if (flag) {
            cout << "Yes\n";
            return 0;
        }
    }
    cout << "No\n";
}
