#include <climits>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    int min_time = INT_MAX;
    for (int i = 0; i < n - k + 1; ++i) {
        int left_first = abs(v[i]) + abs(v[i + k - 1] - v[i]);
        int right_first = abs(v[i + k - 1]) + abs(v[i + k - 1] - v[i]);
        min_time = min(min_time, min(left_first, right_first));
    }
    cout << min_time << '\n';
}

