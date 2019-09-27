#include <algorithm>
#include <climits>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> weights(n);
    for (int i = 0; i < n; ++i)
        cin >> weights[i];

    int min_abs = INT_MAX;
    for (int i = 0; i < n; ++i) {
        int s1 = 0, s2 = 0;
        for (int j = 0; j <= i; ++j)
            s1 += weights[j];
        for (int j = i + 1; j < n; ++j)
            s2 += weights[j];

        min_abs = min(min_abs, abs(s1 - s2));
    }
    cout << min_abs << '\n';
}

