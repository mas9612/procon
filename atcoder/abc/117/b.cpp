#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> L(n);
    for (int i = 0; i < n; ++i)
        cin >> L[i];

    sort(L.begin(), L.end(), greater<int>());

    int longest = L[0];
    int remain = 0;
    for (int i = 1; i < n; ++i)
        remain += L[i];
    if (remain > longest)
        cout << "Yes\n";
    else
        cout << "No\n";
}
