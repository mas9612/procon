#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int result = 0;
    for (int i = 0; i < 2; ++i) {
        if (a > b) {
            result += a;
            --a;
        } else {
            result += b;
            --b;
        }
    }
    cout << result << '\n';
}
