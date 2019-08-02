#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int availability = 3;
    for (int i = a; i <= b; ++i) {
        if (i >= 23 && i <= 25)
            --availability;
    }
    cout << availability << '\n';
}

