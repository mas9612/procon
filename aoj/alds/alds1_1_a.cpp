#include <iostream>
#include <vector>

using namespace std;

void print_vector(vector<int>& v) {
    int size = v.size();
    if (size < 1)
        return;

    cout << v[0];
    for (int i = 1; i < size; ++i)
        cout << ' ' << v[i];
    cout << '\n';
}

void insertion_sort(vector<int>& v) {
    int size = v.size();
    for (int i = 1; i < size; ++i) {
        print_vector(v);

        int key = v[i];
        int j = i - 1;
        while (j >= 0 && v[j] > key) {
            v[j + 1] = v[j];
            --j;
        }
        v[j + 1] = key;
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    insertion_sort(a);
    print_vector(a);
}
