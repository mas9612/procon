#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>

using namespace std;

int calc_time(vector<int>& dishes) {
    int time = 0;
    int size = dishes.size();
    for (int i = 0; i < size; ++i) {
        time += dishes[i];

        if (i < size - 1) {
            while (time % 10 != 0)
                ++time;
        }
    }
    return time;
}

int min_time(vector<int>& dishes) {
    int min_time = INT_MAX;
    do {
        min_time = min(min_time, calc_time(dishes));
    } while (next_permutation(dishes.begin(), dishes.end()));
    return min_time;
}

int main() {
    const int size = 5;
    vector<int> dishes(size);
    for (int i = 0; i < size; ++i)
        cin >> dishes[i];

    cout << min_time(dishes) << '\n';
}
