#include <iostream>

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int count = 0;
    for (int i = a; i <= b; ++i) {
        for (int j = c; j <= d; ++j) {
            if (i != j)
                ++count;
        }
    }
    cout << count << '\n';
}

