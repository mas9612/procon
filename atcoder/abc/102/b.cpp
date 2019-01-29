#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    int abs_max = INT_MIN;
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j)
            abs_max = max(abs_max, abs(a[i] - a[j]));
    }
    cout << abs_max << '\n';
}
