#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;

        for (int j = 0; j < m; ++j) {
            if (s[j] != 'L')
                continue;

            if (j + 4 <= m && s.substr(j, 4) == "LOVE") {
                cout << "YES\n";
                return 0;
            }
        }
    }
    cout << "NO\n";
}

