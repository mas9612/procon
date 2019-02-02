#include <iostream>

using namespace std;

int main() {
    const int cake_max = 16;

    int a, b;
    cin >> a >> b;

    if (a <= cake_max / 2 && b <= cake_max / 2)
        cout << "Yay!\n";
    else
        cout << ":(\n";
}
