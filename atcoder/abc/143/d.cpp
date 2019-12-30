#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> l(n);
    for (int i = 0; i < n; ++i)
        cin >> l[i];

    sort(l.begin(), l.end());

    int count = 0;
    for (int i = 0; i < n - 2; ++i) {
        for (int j = i + 1; j < n - 1; ++j) {
            // subtract l.begin() iterator to get the index
            int k = lower_bound(l.begin(), l.end(), l[i] + l[j]) - l.begin();
            count += (k - 1) - j;
        }
    }

    cout << count << '\n';
}

