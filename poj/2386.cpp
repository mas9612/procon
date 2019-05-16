#include <iostream>
#include <string>
#include <vector>

using namespace std;

void cleanup_pond(vector<string>& v, int x, int y) {
    if (v[x][y] == '.')
        return;

    v[x][y] = '.';
    for (int i = x - 1; i <= x + 1; ++i) {
        for (int j = y - 1; j <= y + 1; ++j) {
            if (i == x && j == y)
                continue;
            // bound check
            if (i < 0 || i >= v.size() || j < 0 || j >= v[i].length())
                continue;

            if (v[i][j] == 'W')
                cleanup_pond(v, i, j);
        }
    }
}

int count(vector<string>& v) {
    int count = 0;

    int size = v.size();
    for (int i = 0; i < size; ++i) {
        int len = v[i].length();
        for (int j = 0; j < len; ++j) {
            if (v[i][j] == 'W') {
                cleanup_pond(v, i, j);
                ++count;
            }
        }
    }

    return count;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    cout << count(v) << '\n';
}

