#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);

    int n, k, q;
    cin >> n >> k >> q;

    vector<int> correct(n + 1, 0);
    int p;
    for (int i = 0; i < q; ++i) {
        cin >> p;
        ++correct[p];
    }

    for (int i = 1; i <= n; ++i) {
        int point = k - (q - correct[i]);
        if (point > 0)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}

