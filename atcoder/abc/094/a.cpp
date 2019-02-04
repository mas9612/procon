#include <iostream>

using namespace std;

int main() {
    int a, b, x;
    cin >> a >> b >> x;

    if (a > x)  // too many cats
        cout << "NO\n";
    else if ((x - a) > b)
        cout << "NO\n";
    else
        cout << "YES\n";
}
