#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if ((a + 1) <= b)
        cout << "YES\n";
    else
        cout << "NO\n";
    cout << max((a + 1), b) - min((a + 1), b) << '\n';
}

