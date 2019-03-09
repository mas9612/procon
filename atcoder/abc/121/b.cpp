#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, M, C;
    cin >> N >> M >> C;

    vector<int> B(M);
    for (int i = 0; i < M; ++i)
        cin >> B[i];

    int number_of_accepted = 0;
    for (int i = 0; i < N; ++i) {
        int sum = C;
        for (int j = 0; j < M; ++j) {
            int a;
            cin >> a;
            sum += a * B[j];
        }
        if (sum > 0)
            ++number_of_accepted;
    }
    cout << number_of_accepted << '\n';
}
