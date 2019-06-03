#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    vector<bool> pressed(n + 1, false);
    int current = 1;
    int count = 0;
    while (true) {
        if (current == 2) {
            cout << count << '\n';
            break;
        }
        if (pressed[current]) {
            cout << -1 << '\n';
            break;
        }

        pressed[current] = true;
        current = a[current - 1];
        ++count;
    }
}

