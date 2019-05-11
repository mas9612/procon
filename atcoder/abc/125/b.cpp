#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int calc_max(vector<int>& jewelries, vector<int>& costs, int index, int current,
             int cost) {
    if (index >= jewelries.size())
        return current - cost;

    int v1 = calc_max(jewelries, costs, index + 1, current + jewelries[index],
                      cost + costs[index]);
    int v2 = calc_max(jewelries, costs, index + 1, current, cost);
    return max(v1, v2);
}

int main() {
    int n;
    cin >> n;

    vector<int> jewelries(n);
    vector<int> costs(n);
    for (int i = 0; i < n; ++i)
        cin >> jewelries[i];
    for (int i = 0; i < n; ++i)
        cin >> costs[i];
    cout << calc_max(jewelries, costs, 0, 0, 0) << '\n';
}
