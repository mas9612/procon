#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    double p_dice = 1.0 / double(n);
    double p_coin = 1.0 / 2.0;
    double probability = 0;
    for (int i = 1; i <= n; ++i) {
        double coin = 1;
        int t = i;
        while (t < k) {
            t *= 2;
            coin *= p_coin;
        }
        probability += p_dice * coin;
    }
    cout << setprecision(12) << probability << '\n';
}

