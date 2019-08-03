#include <iostream>
#include <string>

using namespace std;

int main() {
    int result = 0;

    for (int i = 0; i < 5; ++i) {
        int a;
        cin >> a;

        if (a % 15 == 0) {
            result += 8;
        } else if (a % 3 == 0 || a % 5 == 0) {
            result += 4;
        } else {
            result += to_string(a).length();
            // while (a > 0) {
            //     ++result;
            //     a /= 10;
            // }
        }
    }

    cout << result << '\n';
}

