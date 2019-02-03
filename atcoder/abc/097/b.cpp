#include <iostream>

using namespace std;

int pow(int a, int b) {
    int ans = a;
    for (int i = 1; i < b; ++i)
        ans *= a;
    return ans;
}

int main() {
    int x;
    cin >> x;

    if (x == 1) {
        cout << x << '\n';
        return 0;
    }

    int answer = 0;
    for (int b = 2; b < x; ++b) {
        for (int p = 2;; ++p) {
            int n = pow(b, p);
            if (n > x)
                break;
            answer = max(answer, n);
        }
    }
    cout << answer << '\n';
}
