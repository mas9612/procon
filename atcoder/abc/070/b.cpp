#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int start = max(a, c);
    int end = min(b, d);
    cout << max(0, end - start) << '\n';
}

