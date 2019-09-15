#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int insertion_sort(vector<int>& v, int length, int step) {
    int count = 0;

    for (int i = step; i < length; ++i) {
        int tmp = v[i];
        int j = i - step;
        while (j >= 0 && v[j] > tmp) {
            v[j + step] = v[j];
            j -= step;
            ++count;
        }
        v[j + step] = tmp;
    }

    return count;
}

int shell_sort(vector<int>& v, int length, vector<int>& g, int m) {
    int count = 0;

    for (int i = 0; i < m; ++i)
        count += insertion_sort(v, length, g[i]);

    return count;
}

void make_step(vector<int>& g, int target_len) {
    g.clear();

    int h = 1;
    while (true) {
        if (h > target_len)
            break;

        g.push_back(h);
        h = 3 * h + 1;
    }

    reverse(g.begin(), g.end());
}

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    vector<int> g;
    make_step(g, n);
    int count = shell_sort(v, n, g, g.size());

    cout << g.size() << '\n';
    cout << g[0];
    for (int i = 1; i < g.size(); ++i)
        cout << ' ' << g[i];
    cout << '\n';

    cout << count << '\n';

    for (int i = 0; i < n; ++i)
        cout << v[i] << '\n';
}

