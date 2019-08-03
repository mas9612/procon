#include <iostream>

int solve(int a, int b, int cur, int i);

using namespace std;

int main() {
    int n;
    cin >> n;
    cout << solve(2, 7, 0, n) << '\n';
}

int solve(int a, int b, int cur, int i) {
    if (cur == i)
        return a / b;

    return solve(a % b * 10, b, cur + 1, i);
}

