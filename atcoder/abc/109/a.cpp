#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    bool exists = false;
    for (int i = 1; i <= 3; ++i) {
        int tmp = a * b * i;
        if (tmp % 2 == 1) {
            exists = true;
            break;
        }
    }
    if (exists)
        cout << "Yes\n";
    else
        cout << "No\n";
}
