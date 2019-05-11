#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];
    vector<int> c(n);
    for (int i = 0; i < n; ++i)
        cin >> c[i];

    int max_value = 0;
    for (int i = 0; i < n; ++i) {
        if (v[i] > c[i])
            max_value += v[i] - c[i];
    }
    cout << max_value << '\n';
}
