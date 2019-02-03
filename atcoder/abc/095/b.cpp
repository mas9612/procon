#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    vector<int> m(n);
    for (int i = 0; i < n; ++i)
        cin >> m[i];

    sort(m.begin(), m.end());

    int count = 0;
    for (int i = 0; i < n; ++i) {
        x -= m[i];
        ++count;
    }
    count += x / m[0];
    cout << count << '\n';
}
