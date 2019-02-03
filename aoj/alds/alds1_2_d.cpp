#include <iostream>
#include <vector>

using namespace std;

int insertion_sort(vector<int>& v, int step) {
    int size = v.size();
    int count = 0;
    for (int i = step; i < size; ++i) {
        int tmp = v[i];
        int j = i - step;
        while (j >= 0 && v[j] > tmp) {
            v[j + step] = v[j];
            j -= step;
            ++count;
        }
        v[j + step] = tmp;
    }
    return count;
}

int shell_sort(vector<int>& v, vector<int> h) {
    int h_size = h.size();
    int count = 0;
    for (int i = h_size - 1; i >= 0; --i)
        count += insertion_sort(v, h[i]);
    return count;
}

void print_vector(vector<int>& v) {
    int size = v.size();
    cout << v[size - 1];
    for (int i = size - 2; i >= 0; --i)
        cout << ' ' << v[i];
    cout << '\n';
}

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    vector<int> h;
    h.push_back(1);
    for (int i = 0;; ++i) {
        int tmp = 3 * h[i] + 1;
        if (tmp < n)
            h.push_back(tmp);
        else
            break;
    }

    int count = shell_sort(v, h);

    int h_size = h.size();
    cout << h_size << '\n';
    print_vector(h);
    cout << count << '\n';

    for (int i = 0; i < n; ++i)
        cout << v[i] << '\n';
}
