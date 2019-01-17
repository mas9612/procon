#include <cmath>
#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int min_cost(vector<int>& costs) {
    const int INF = 10e5;
    int size = costs.size();
    vector<int> calc(size, INF);

    calc[0] = 0;
    for (int i = 1; i < size; ++i) {
        int cost_a = INF, cost_b = INF;
        if (i - 1 >= 0)
            cost_a = calc[i - 1] + abs(costs[i] - costs[i - 1]);
        if (i - 2 >= 0)
            cost_b = calc[i - 2] + abs(costs[i] - costs[i - 2]);
        calc[i] = min(cost_a, cost_b);
    }
    return calc[size - 1];
}

int main() {
    int n;
    cin >> n;

    vector<int> h(n);
    for (int i = 0; i < n; ++i)
        cin >> h[i];

    cout << min_cost(h) << '\n';
}
