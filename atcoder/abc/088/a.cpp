#include <iostream>

using namespace std;

int main() {
    int n, a;
    cin >> n >> a;

    int reminder = n % 500;
    if (reminder <= a)
        cout << "Yes\n";
    else
        cout << "No\n";
}
