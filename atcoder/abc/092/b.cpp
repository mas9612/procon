#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    int d, x;
    cin >> d >> x;

    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    int count = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0;; ++j) {
            int day = j * a[i] + 1;
            if (day > d)
                break;
            ++count;
        }
    }
    cout << count + x << '\n';
}
