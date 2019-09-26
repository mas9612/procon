#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    double result = 0;
    for (int i = 0; i < n; ++i) {
        double a;
        cin >> a;
        result += 1 / a;
    }
    result = 1 / result;
    cout << setprecision(16) << result << '\n';
}

