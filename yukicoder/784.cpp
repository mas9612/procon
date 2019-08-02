#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    reverse(s.begin(), s.end());

    char result[50];
    int ri = 0;
    for (int i = 0; i < s.length(); ++i) {
        if ((i > 0) && (i % 3 == 0)) {
            result[ri] = ',';
            ++ri;
        }
        result[ri] = s[i];
        ++ri;
    }
    --ri;
    if (result[ri] == ',')
        --ri;

    while (ri >= 0) {
        cout << result[ri];
        --ri;
    }
    cout << '\n';
}

