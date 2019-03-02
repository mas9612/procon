#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    int plan1 = a * n;
    int plan2 = b;
    cout << min(plan1, plan2) << '\n';
}

