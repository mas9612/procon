#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    long long k;
    cin >> k;

    for (int i = 0; i < k; ++i) {
        if (s[i] != '1') {
            cout << s[i] << '\n';
            return 0;
        }
    }
    cout << "1\n";
}

