#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    int zero = 0;
    int one = 0;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '0')
            ++zero;
        else
            ++one;
    }
    cout << min(zero, one) * 2 << '\n';
}
