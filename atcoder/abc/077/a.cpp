#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<string> c(2);
    cin >> c[0];
    cin >> c[1];

    bool flag = true;
    for (int i = 0; i < 3; ++i) {
        if (c[0][i] != c[1][2 - i]) {
            flag = false;
            break;
        }
    }

    if (flag)
        cout << "YES\n";
    else
        cout << "NO\n";
}

