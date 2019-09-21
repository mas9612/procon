#include <iostream>
#include <vector>

using namespace std;

int binary_search(vector<int>& v, int key) {
    int left = 0;
    int right = v.size() - 1;

    while (left <= right) {
        int mid = (left + right) / 2;
        if (v[mid] == key)
            return mid;
        else if (v[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for (int i = 0; i < n; ++i)
        cin >> s[i];

    int q;
    cin >> q;
    vector<int> t(q);
    for (int i = 0; i < q; ++i)
        cin >> t[i];

    int count = 0;
    for (int i = 0; i < q; ++i) {
        if (binary_search(s, t[i]) != -1)
            ++count;
    }
    cout << count << '\n';
}

