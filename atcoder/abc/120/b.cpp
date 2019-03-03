#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int a, b, k;
    cin >> a >> b >> k;

    vector<int> v;
    int limit = min(a, b);
    for (int i = 1; i <= limit; ++i) {
        if (a % i == 0 && b % i == 0)
            v.push_back(i);
    }

    int divisor_count = v.size();
    cout << v[divisor_count - k] << '\n';
}
