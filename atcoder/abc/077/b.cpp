#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int prev = 0;
    for (int i = 0;; ++i) {
        int val = i * i;
        if (val > n)
            break;
        prev = val;
    }
    cout << prev << '\n';
}
