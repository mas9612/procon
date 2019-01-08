#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    const int favorite_sum = 753;
    const int max_char = 11;
    int min_diff = 10000;
    for (int i = 0; i < max_char - 3; ++i) {
        if (s[i + 2] == '\0')
            break;
        int tmp = stoi(s.substr(i, 3));
        int diff = abs(favorite_sum - tmp);
        if (min_diff > diff)
            min_diff = diff;
    }
    cout << min_diff << '\n';
}

