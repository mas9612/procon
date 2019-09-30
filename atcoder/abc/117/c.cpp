#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> x(m);
    for (int i = 0; i < m; ++i)
        cin >> x[i];

    if (n >= m) {
        cout << 0 << '\n';
        return 0;
    }

    sort(x.begin(), x.end());

    vector<int> distance(m - 1);
    for (int i = 0; i < m - 1; ++i)
        distance[i] = x[i + 1] - x[i];
    sort(distance.begin(), distance.end(), greater<int>());

    int ans = x[m - 1] - x[0];
    for (int i = 0; i < n - 1; ++i)
        ans -= distance[i];
    cout << ans << '\n';
}

