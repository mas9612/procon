#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int result = a + b;
    result = max(result, a - b);
    result = max(result, a * b);

    cout << result << '\n';
}

