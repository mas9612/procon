#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

struct Point {
    long x;
    long y;
    long h;
};

long height(long H, long x, long y, Point& p) {
    long h = H - abs(x - p.x) - abs(y - p.y);
    return max(h, 0L);
}

int main() {
    int n;
    cin >> n;

    int init_index;
    vector<Point> points(n);
    for (int i = 0; i < n; ++i) {
        cin >> points[i].x >> points[i].y >> points[i].h;
        if (points[i].h > 0)
            init_index = i;
    }

    const int xy_max = 100;
    for (int x = 0; x <= xy_max; ++x) {
        for (int y = 0; y <= xy_max; ++y) {
            long H = abs(x - points[init_index].x) +
                     abs(y - points[init_index].y) + points[init_index].h;
            H = max(H, 0L);

            bool flag = true;
            for (int i = 0; i < n; ++i) {
                if (height(H, x, y, points[i]) != points[i].h) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                cout << x << ' ' << y << ' ' << H << '\n';
                return 0;
            }
        }
    }
}
