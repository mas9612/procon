#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int n, l;
    cin >> n >> l;

    int original = 0;
    for (int i = 1; i <= n; ++i)
        original += l + i - 1;

    int after_eat = original - (l + 1 - 1);
    for (int i = 2; i <= n; ++i) {
        int tmp = original - (l + i - 1);

        if (abs(original - after_eat) > abs(original - tmp))
            after_eat = tmp;
    }
    cout << after_eat << '\n';
}

