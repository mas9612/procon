#include <climits>
#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int min_cost(vector<int>& costs, int k) {
    const int INF = INT_MAX;
    int size = costs.size();
    vector<int> calc(size, INF);

    calc[0] = 0;
    for (int i = 1; i < size; ++i) {
        for (int j = 1; j <= k; ++j) {
            if (i - j < 0)
                break;
            int c = calc[i - j] + abs(costs[i] - costs[i - j]);
            if (calc[i] > c)
                calc[i] = c;
        }
    }
    return calc[size - 1];
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> costs(n);
    for (int i = 0; i < n; ++i)
        cin >> costs[i];

    cout << min_cost(costs, k) << '\n';
}
