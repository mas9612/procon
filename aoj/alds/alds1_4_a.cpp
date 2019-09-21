#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for (int i = 0; i < n; ++i)
        cin >> s[i];

    int q;
    cin >> q;
    vector<int> t(q);
    for (int i = 0; i < q; ++i)
        cin >> t[i];

    int count = 0;
    for (int i = 0; i < q; ++i) {
        for (int j = 0; j < n; ++j) {
            if (s[j] == t[i]) {
                ++count;
                break;
            }
        }
    }
    cout << count << '\n';
}

