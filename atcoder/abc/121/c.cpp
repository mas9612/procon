#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>

using namespace std;

bool sort_drinks(const pair<long, long> a, const pair<long, long> b) {
    return a.first < b.first;
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<pair<long, long>> drinks(N);
    for (int i = 0; i < N; ++i) {
        int a, b;
        cin >> a >> b;
        drinks[i] = make_pair(a, b);
    }

    sort(drinks.begin(), drinks.end(), sort_drinks);

    long min_price = 0;
    int number_of_bought = 0;
    for (int i = 0; i < N; ++i) {
        if (number_of_bought >= M)
            break;

        int lack = M - number_of_bought;
        if (lack >= drinks[i].second) {  // should buy maximum num
            min_price += drinks[i].first * drinks[i].second;
            number_of_bought += drinks[i].second;
        } else {
            min_price += lack * drinks[i].first;
            number_of_bought += lack;
        }
    }
    cout << min_price << '\n';
}
