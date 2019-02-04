#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m, x;
    cin >> n >> m >> x;

    vector<int> costs(n + 1, 0);
    for (int i = 0; i < m; ++i) {
        int tmp;
        cin >> tmp;
        costs[tmp] = 1;
    }

    int forward = 0;
    for (int i = x; i <= n; ++i)
        forward += costs[i];

    int backward = 0;
    for (int i = x; i >= 0; --i)
        backward += costs[i];

    cout << min(forward, backward) << '\n';
}
