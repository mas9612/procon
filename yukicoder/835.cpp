#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    double total = n * 1.5;
    cout << int(floor(total)) << '\n';
}

