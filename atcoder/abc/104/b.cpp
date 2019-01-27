#include <cctype>
#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    string result("WA");
    if (s[0] == 'A') {
        int c_idx = -1;
        for (int i = 2; i < s.length() - 1; ++i) {  // find 'C'
            if (s[i] == 'C') {
                c_idx = i;
                break;
            }
        }

        if (c_idx != -1) {  // check all chars are lowercase except 'A' and 'C'
            bool flag = true;
            for (int i = 1; i < s.length(); ++i) {
                if (i != c_idx && islower(s[i]) == 0) {
                    flag = false;
                    break;
                }
            }
            if (flag)
                result = "AC";
        }
    }
    cout << result << '\n';
}
