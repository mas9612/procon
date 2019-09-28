#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    priority_queue<double, vector<double>, greater<double>> pq;
    double value;
    for (int i = 0; i < n; ++i) {
        cin >> value;
        pq.push(value);
    }

    for (int i = 0; i < n - 1; ++i) {
        double v1 = pq.top();
        pq.pop();
        double v2 = pq.top();
        pq.pop();
        pq.push((v1 + v2) / 2.0);
    }

    cout << pq.top() << '\n';
}

