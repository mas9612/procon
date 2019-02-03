#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (abs(a - c) <= d)
        cout << "Yes\n";
    else if (abs(a - b) <= d && abs(b - c) <= d)
        cout << "Yes\n";
    else
        cout << "No\n";
}
