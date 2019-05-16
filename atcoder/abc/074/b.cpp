#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> x(n);
    for (int i = 0; i < n; ++i)
        cin >> x[i];

    int result = 0;
    for (int i = 0; i < n; ++i) {
        int a = x[i] * 2;
        int b = (k - x[i]) * 2;
        result += min(a, b);
    }
    cout << result << '\n';
}

