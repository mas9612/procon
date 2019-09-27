#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> b(n - 1);
    for (int i = 0; i < n - 1; ++i)
        cin >> b[i];

    int sum = b[0];
    int prev = b[0];
    for (int i = 1; i < n - 1; ++i) {
        sum += min(prev, b[i]);
        prev = b[i];
    }
    sum += b[b.size() - 1];
    cout << sum << '\n';
}

