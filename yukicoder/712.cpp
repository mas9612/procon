#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int count = 0;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;

        for (int j = 0; j < m; ++j) {
            if (s[j] == 'W')
                ++count;
        }
    }

    cout << count << '\n';
}

