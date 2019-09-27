#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> h(n);
    for (int i = 0; i < n; ++i)
        cin >> h[i];

    vector<int> can_move(n, 0);
    for (int i = n - 2; i >= 0; --i) {
        if (h[i] >= h[i + 1])
            can_move[i] = can_move[i + 1] + 1;
    }

    int max_move = can_move[0];
    for (int i = 1; i < n; ++i)
        max_move = max(max_move, can_move[i]);
    cout << max_move << '\n';
}

