#include <iostream>

using namespace std;

bool check_only_one_char(int num) {
    int n = num % 10;
    num /= 10;

    while (num > 0) {
        int tmp = num % 10;
        if (n != tmp)
            return false;
        num /= 10;
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    for (int i = n;; ++i) {
        if (check_only_one_char(i)) {
            cout << i << '\n';
            break;
        }
    }
}
