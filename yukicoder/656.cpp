#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    int score = 0;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '0')
            score += 10;
        else
            score += s[i] - '0';
    }

    cout << score << '\n';
}

