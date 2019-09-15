#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    const int max_val = 10000;
    vector<int> count(max_val + 1, 0);
    for (int i = 0; i < n; ++i)
        ++count[v[i]];

    for (int i = 1; i <= max_val; ++i)
        count[i] += count[i - 1];

    vector<int> sorted(n);
    for (int i = n - 1; i >= 0; --i) {
        // I must decrease count before copy to the answer array since I store
        // all arrays as 0-origin
        --count[v[i]];
        sorted[count[v[i]]] = v[i];
    }

    cout << sorted[0];
    for (int i = 1; i < n; ++i)
        cout << ' ' << sorted[i];
    cout << '\n';
}

