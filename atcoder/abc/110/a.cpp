#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> n(3);
    for (int i = 0; i < 3; ++i)
        cin >> n[i];

    sort(n.begin(), n.end(), greater<int>());
    cout << (n[0] * 10 + n[1]) + n[2] << '\n';
}
