#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    int count = 0;
    for (int i = 1; i < n - 1; ++i) {
        int max_val = v[i - 1];
        int min_val = v[i - 1];
        for (int k = i; k <= i + 1; ++k) {
            max_val = max(max_val, v[k]);
            min_val = min(min_val, v[k]);
        }

        if (min_val != v[i] && max_val != v[i])
            ++count;
    }

    cout << count << '\n';
}

