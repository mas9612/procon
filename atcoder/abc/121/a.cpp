#include <iostream>

using namespace std;

int main() {
    int H, W;
    cin >> H >> W;

    int h, w;
    cin >> h >> w;

    int all = H * W;
    int black = h * W + w * H - h * w;  // ignore duplicate (h*w)

    cout << all - black << '\n';
}
