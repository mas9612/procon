#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    long long count = 0;
    string s;
    map<string, long long> m;
    for (int i = 0; i < n; ++i) {
        cin >> s;
        sort(s.begin(), s.end());

        if (m.find(s) != m.end()) {
            count += m[s];
            ++m[s];
        } else {
            m[s] = 1;
        }
    }
    cout << count << '\n';
}

