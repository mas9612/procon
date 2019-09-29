#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    bool flag = true;
    for (int i = n - 1; i >= 0; --i) {
        if (v[i - 1] <= v[i]) {
            continue;
        } else if (v[i - 1] - 1 == v[i]) {
            --v[i - 1];
        } else {
            flag = false;
            break;
        }
    }

    if (flag)
        cout << "Yes\n";
    else
        cout << "No\n";
}

