#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int ans = a + b;
    ans = max(ans, a - b);
    ans = max(ans, a * b);
    cout << ans << '\n';
}
