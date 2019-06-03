#include <iostream>

using namespace std;

int main() {
    int x, a, b;
    cin >> x >> a >> b;

    int day_of_expired = b - a;
    if (day_of_expired <= 0)
        cout << "delicious\n";
    else if (day_of_expired <= x)
        cout << "safe\n";
    else
        cout << "dangerous\n";
}

