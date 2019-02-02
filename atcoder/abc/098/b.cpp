#include <algorithm>
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int max_count = 0;
    for (int i = 1; i < n - 1; ++i) {
        int count = 0;
        map<char, int> m;

        for (int j = 0; j < i; ++j) {      // left side
            for (int k = i; k < n; ++k) {  // right side
                if (m.find(s[j]) == m.end() && s[j] == s[k]) {
                    ++count;
                    m.insert(make_pair(s[j], 1));
                    break;
                }
            }
        }
        max_count = max(max_count, count);
    }
    cout << max_count << '\n';
}
