#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    int count_even_black = 0;
    int count_odd_black = 0;
    for (int i = 0; i < s.length(); ++i) {
        if (i % 2 == 0) {
            if (s[i] == '1')
                ++count_even_black;
            else
                ++count_odd_black;
        } else {
            if (s[i] == '1')
                ++count_odd_black;
            else
                ++count_even_black;
        }
    }

    cout << min(count_odd_black, count_even_black) << '\n';
}

