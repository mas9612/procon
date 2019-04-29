#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int count = 0;
    for (int i = 0; i < N; ++i) {
        int t;
        cin >> t;

        while (t % 2 == 0) {
            ++count;
            t /= 2;
        }
    }

    cout << count << '\n';
}
