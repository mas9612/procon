#include <iostream>
#include <string>

using namespace std;

bool palindromic(int n) {
    int tmp = n;
    int len = 0;
    while (tmp > 0) {
        ++len;
        tmp /= 10;
    }

    string s = to_string(n);
    for (int i = 0; i < len / 2; ++i) {
        if (s[i] != s[len - 1 - i])
            return false;
    }
    return true;
}

int main() {
    int a, b;
    cin >> a >> b;

    int count = 0;
    for (int i = a; i <= b; ++i) {
        if (palindromic(i))
            ++count;
    }
    cout << count << '\n';
}
