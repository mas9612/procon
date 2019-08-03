#include <iostream>

using namespace std;

int main() {
    int ii;
    cin >> ii;

    for (int i = 0; i < ii; ++i) {
        int n;
        cin >> n;

        if (n % 8 == 0 && n % 10 == 0)
            cout << "ikisugi\n";
        else if (n % 8 == 0)
            cout << "iki\n";
        else if (n % 10 == 0)
            cout << "sugi\n";
        else
            cout << n / 3 << '\n';
    }
}

