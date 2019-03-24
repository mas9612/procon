#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    int length = s.length();
    int max_len = 0;
    for (int i = 0; i < length; ++i) {
        int len = 0;
        for (int j = i; j < length; ++j) {
            bool flag = false;
            switch (s[j]) {
                case 'A':  // fall through
                case 'C':  // fall through
                case 'G':  // fall through
                case 'T':
                    ++len;
                    break;
                default:
                    flag = true;
                    break;
            }
            if (flag)
                break;
        }
        max_len = max(max_len, len);
    }
    cout << max_len << '\n';
}
