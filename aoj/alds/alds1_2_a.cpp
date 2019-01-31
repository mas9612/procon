#include <iostream>
#include <utility>
#include <vector>

using namespace std;

void print_vector(vector<int> v) {
    int size = v.size();
    cout << v[0];
    for (int i = 1; i < size; ++i)
        cout << ' ' << v[i];
    cout << '\n';
}

int bubble_sort(vector<int>& v) {
    int swap_count = 0;
    int size = v.size();

    for (int i = 0; i < size - 1; ++i) {
        for (int j = size - 1; j > i; --j) {
            if (v[j] < v[j - 1]) {
                swap(v[j], v[j - 1]);
                ++swap_count;
            }
        }
    }

    return swap_count;
}

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    int count = bubble_sort(v);
    print_vector(v);
    cout << count << '\n';
}
