#include <iostream>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    int pos = 0;
    int count = 1;  // at least bound one time because initial position is 0
    for (int i = 1; i <= n; ++i) {
        int l;
        cin >> l;
        pos += l;
        if (pos <= x)
            ++count;
    }
    cout << count << '\n';
}

