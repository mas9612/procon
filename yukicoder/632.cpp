#include <iostream>
#include <vector>

using namespace std;

bool is_kadomatsu(vector<int>& v);

int main() {
    int unknown;
    vector<int> v(3, 0);
    for (int i = 0; i < 3; ++i) {
        char c;
        cin >> c;

        if (c == '?')
            unknown = i;
        else
            v[i] = c - '0';
    }

    v[unknown] = 1;
    bool ans1 = is_kadomatsu(v);
    v[unknown] = 4;
    bool ans4 = is_kadomatsu(v);

    if (ans1 && ans4)
        cout << "14\n";
    else if (ans1)
        cout << "1\n";
    else
        cout << "4\n";
}

bool is_kadomatsu(vector<int>& v) {
    if (v[0] == v[1] || v[0] == v[2] || v[1] == v[2])
        return false;

    int max_idx = 0;
    int min_idx = 0;
    for (int i = 1; i < 3; ++i) {
        if (v[max_idx] < v[i])
            max_idx = i;
        if (v[min_idx] > v[i])
            min_idx = i;
    }
    if (max_idx != 1 && min_idx != 1)
        return false;

    return true;
}

