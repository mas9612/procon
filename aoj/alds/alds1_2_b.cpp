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

int selection_sort(vector<int>& v) {
    int swap_count = 0;
    int size = v.size();

    for (int i = 0; i < size - 1; ++i) {
        int min_index = i;
        for (int j = i; j < size; ++j) {
            if (v[j] < v[min_index])
                min_index = j;
        }
        if (i != min_index) {
            swap(v[i], v[min_index]);
            ++swap_count;
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

    int count = selection_sort(v);
    print_vector(v);
    cout << count << '\n';
}
