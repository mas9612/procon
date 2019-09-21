#include <iostream>
#include <vector>

using namespace std;

bool _can_make(vector<int>& v, int key, int idx, int sum) {
    if (sum == key)
        return true;
    if (idx >= v.size())
        return false;

    bool r1 = _can_make(v, key, idx + 1, sum);
    bool r2 = _can_make(v, key, idx + 1, sum + v[idx]);
    return r1 || r2;
}

bool can_make(vector<int>& v, int key) { return _can_make(v, key, 0, 0); }

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    int q;
    cin >> q;
    for (int i = 0; i < q; ++i) {
        int m;
        cin >> m;
        if (can_make(a, m))
            cout << "yes\n";
        else
            cout << "no\n";
    }
}

