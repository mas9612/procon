#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int count = 1;  // at least one charcter exists
    char t = s[0];
    for (int i = 1; i < n; ++i) {
        if (t != s[i]) {
            ++count;
            t = s[i];
        }
    }

    cout << count << '\n';
}

