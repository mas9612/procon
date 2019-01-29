#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    const int n = 3;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    sort(a.begin(), a.end());

    int cost = 0;
    for (int i = 0; i < n - 1; ++i)
        cost += abs(a[i] - a[i + 1]);
    cout << cost << '\n';
}
