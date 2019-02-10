#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int b_width = 0;
    int tmp = b;
    while (tmp > 0) {
        ++b_width;
        tmp /= 10;
    }

    int num = a;
    for (int i = 0; i < b_width; ++i)
        num *= 10;
    num += b;

    for (int i = 1; i < num; ++i) {
        if (i * i == num) {
            cout << "Yes\n";
            return 0;
        }
    }
    cout << "No\n";
}
