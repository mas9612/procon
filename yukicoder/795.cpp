#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int total = n * 100 + m * 10;
    if (total % 2 == 0)
        cout << "Yes\n";
    else
        cout << "No\n";
}

