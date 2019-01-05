#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    sort(v.begin(), v.end());
    int min = v[k - 1] - v[0];
    for (int i = k; i < n; ++i) {
        int tmp = v[i] - v[i - k + 1];
        if (tmp < min)
            min = tmp;
    }
    cout << min << '\n';
}

