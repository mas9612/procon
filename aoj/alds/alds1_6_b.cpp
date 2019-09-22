#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int partition(vector<int>& v, int left, int right) {
    int base = v[right];
    int idx = left - 1;
    for (int i = left; i < right; ++i) {
        if (v[i] <= base) {
            ++idx;
            swap(v[idx], v[i]);
        }
    }
    ++idx;
    swap(v[idx], v[right]);
    return idx;
}

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    int idx = partition(a, 0, n - 1);

    if (idx == 0)
        cout << '[' << a[0] << ']';
    else
        cout << a[0];
    for (int i = 1; i < n; ++i) {
        cout << ' ';
        if (i == idx)
            cout << '[';
        cout << a[i];
        if (i == idx)
            cout << ']';
    }
    cout << '\n';
}

