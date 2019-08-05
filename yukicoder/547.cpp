#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> s(n);
    vector<string> t(n);
    for (int i = 0; i < n; ++i)
        cin >> s[i];
    for (int i = 0; i < n; ++i)
        cin >> t[i];

    for (int i = 0; i < n; ++i) {
        if (s[i] != t[i]) {
            cout << i + 1 << '\n' << s[i] << '\n' << t[i] << '\n';
            break;
        }
    }
}

