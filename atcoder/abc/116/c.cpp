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

    int count = 0;
    while (true) {
        int c = 0;
        bool flag = false;
        bool changed = false;
        for (int i = 0; i < n; ++i) {
            --h[i];
            if (h[i] >= 0) {
                flag = true;
                changed = true;
            } else {
                if (flag)
                    ++c;
                flag = false;
            }
        }
        if (flag)
            ++c;
        flag = false;

        count += c;

        if (!changed)
            break;
    }
    cout << count << '\n';
}

