#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> p(n);
    vector<int> p_sort(n);
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
        p_sort[i] = p[i];
    }

    sort(p_sort.begin(), p_sort.end());

    int differ = 0;
    for (int i = 0; i < n; ++i) {
        if (p[i] != p_sort[i])
            ++differ;
    }
    if (differ > 2)
        cout << "NO\n";
    else
        cout << "YES\n";
}

