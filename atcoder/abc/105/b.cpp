#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    const int cake_price = 4;
    const int donut_price = 7;
    bool flag = false;
    for (int i = 0;; ++i) {  // cake
        if (i * cake_price > n)
            break;

        for (int j = 0;; ++j) {  // donut
            int price = i * cake_price + j * donut_price;
            if (price == n) {
                flag = true;
                break;
            }
            if (price > n)
                break;
        }
    }
    if (flag)
        cout << "Yes\n";
    else
        cout << "No\n";
}
