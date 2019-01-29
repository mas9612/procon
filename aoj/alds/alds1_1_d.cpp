#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> R(n);
    for (int i = 0; i < n; ++i)
        cin >> R[i];

    int min = R[0];
    vector<int> v(n, INT_MIN);
    for (int i = 1; i < n; ++i) {
        v[i] = max(v[i - 1], R[i] - min);
        if (min > R[i])
            min = R[i];
    }
    cout << v[n - 1] << '\n';
}
