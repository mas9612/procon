#include <iostream>
#include <string>
#include <vector>

using namespace std;

int count_bomb(vector<string>& v, int x, int y) {
    int count = 0;

    for (int i = x - 1; i <= x + 1; ++i) {
        if (i < 0 || i >= v.size())
            continue;
        for (int j = y - 1; j <= y + 1; ++j) {
            if (j < 0 || j >= v[0].length())
                continue;

            if (i == x && j == y)
                continue;
            if (v[i][j] == '#')
                ++count;
        }
    }
    return count;
}

int main() {
    int h, w;
    cin >> h >> w;

    vector<string> v(h);
    for (int i = 0; i < h; ++i)
        cin >> v[i];

    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
            if (v[i][j] == '.')
                v[i][j] = '0' + count_bomb(v, i, j);
        }
    }

    for (int i = 0; i < h; ++i)
        cout << v[i] << '\n';
}

