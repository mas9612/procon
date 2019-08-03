#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;

    int eta = int((double)a * 60 / 100);
    cout << setw(2) << setfill('0') << 10 + eta / 60 << ':';
    cout << setw(2) << setfill('0') << eta % 60 << '\n';
}

