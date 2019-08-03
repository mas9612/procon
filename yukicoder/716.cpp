#include <algorithm>
#include <climits>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> points(n);
    for (int i = 0; i < n; ++i)
        cin >> points[i];

    int max_dist = 0;
    int min_dist = INT_MAX;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == j)
                continue;

            max_dist = max(max_dist, abs(points[i] - points[j]));
            min_dist = min(min_dist, abs(points[i] - points[j]));
        }
    }

    cout << min_dist << '\n';
    cout << max_dist << '\n';
}

