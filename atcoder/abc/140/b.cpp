#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n + 1);
    vector<int> b(n + 1);
    vector<int> c(n);
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    for (int i = 1; i <= n; ++i)
        cin >> b[i];
    for (int i = 1; i < n; ++i)
        cin >> c[i];

    int satisfication = 0;
    int prev;
    for (int i = 1; i <= n; ++i) {
        satisfication += b[a[i]];
        if (i > 1 && prev + 1 == a[i])
            satisfication += c[prev];
        prev = a[i];
    }
    cout << satisfication << '\n';
}

