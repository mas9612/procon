#include <iostream>
#include <string>

using namespace std;

int main() {
    const double btc_yen = 380000;

    int N;
    cin >> N;

    double sum = 0;
    for (int i = 0; i < N; ++i) {
        double x;
        cin >> x;

        string type;
        cin >> type;

        if (type == "JPY")
            sum += x;
        else
            sum += btc_yen * x;
    }

    cout << sum << '\n';
}
