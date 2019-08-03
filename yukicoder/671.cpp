#include <cmath>
#include <iostream>
#include <string>

using namespace std;

int main() {
    const int nright = 8;

    string s;
    cin >> s;
    int count = 0;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '0')
            ++count;
    }

    cout << abs(count - nright) << '\n';
}

