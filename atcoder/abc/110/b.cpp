#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, M, X, Y;
    cin >> N >> M >> X >> Y;

    vector<int> x(N);
    for (int i = 0; i < N; ++i)
        cin >> x[i];

    vector<int> y(M);
    for (int i = 0; i < M; ++i)
        cin >> y[i];

    sort(x.begin(), x.end(), greater<int>());
    int Z = x[0] + 1;
    while (Z <= X)
        ++Z;

    bool war = false;
    if (Z <= Y) {
        for (int i = 0; i < M; ++i) {
            if (y[i] < Z) {
                war = true;
                break;
            }
        }
    } else {
        war = true;
    }
    if (war)
        cout << "War\n";
    else
        cout << "No War\n";
}
