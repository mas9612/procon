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

    vector<int> v_sort(n);
    copy(v.begin(), v.end(), v_sort.begin());
    sort(v_sort.begin(), v_sort.end());

    for (int i = 0; i < n; ++i) {
        if (v[i] == v_sort[n - 1])
            cout << v_sort[n - 2] << '\n';
        else
            cout << v_sort[n - 1] << '\n';
    }
}

