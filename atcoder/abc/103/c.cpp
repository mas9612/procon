#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int t;
    long result = 0;
    for (int i = 0; i < N; ++i) {
        cin >> t;
        result += t - 1;
    }
    cout << result << '\n';
}
