#include <iostream>
#include <string>

using namespace std;

bool is_easy_to_dance(string s) {
    for (int i = 0; i < s.length(); i += 2) {
        if (s[i] != 'R' && s[i] != 'U' && s[i] != 'D') {
            return false;
        }
    }
    for (int i = 1; i < s.length(); i += 2) {
        if (s[i] != 'L' && s[i] != 'U' && s[i] != 'D') {
            return false;
        }
    }
    return true;
}

int main() {
    string s;
    cin >> s;

    if (is_easy_to_dance(s))
        cout << "Yes\n";
    else
        cout << "No\n";
}

