#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, t, a;
    cin >> n >> t >> a;

    vector<int> h(n);
    for (int i = 0; i < n; ++i)
        cin >> h[i];

    t *= 1000;
    a *= 1000;
    int min = abs(a - (t - h[0] * 6));
    int min_index = 0;
    for (int i = 1; i < n; ++i) {
        int diff = abs(a - (t - h[i] * 6));
        if (diff < min) {
            min = diff;
            min_index = i;
        }
    }
    cout << min_index + 1 << '\n';
}
