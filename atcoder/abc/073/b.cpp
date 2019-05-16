#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int all = 0;
    for (int i = 0; i < n; ++i) {
        int l, r;
        cin >> l >> r;
        all += r - l + 1;
    }
    cout << all << '\n';
}

