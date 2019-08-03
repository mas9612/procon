#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == 'I' || s[i] == 'l')
            s[i] = '1';
        else if (s[i] == 'O' || s[i] == 'o')
            s[i] = '0';
    }

    cout << s << '\n';
}

