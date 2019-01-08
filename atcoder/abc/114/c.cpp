#include <iostream>
#include <vector>

using namespace std;

bool check(int num) {
    vector<bool> flags(3, false);
    while (num > 0) {
        int tmp = num % 10;
        switch (tmp) {
            case 3:
                flags[0] = true;
                break;
            case 5:
                flags[1] = true;
                break;
            case 7:
                flags[2] = true;
                break;
        }
        num /= 10;
    }
    if (flags[0] && flags[1] && flags[2]) {
        return true;
    } else
        return false;
}

void make_numbers(long current, int max, int& count) {
    if (current <= max) {
        if (current > 0 && check(current))
            ++count;
        long tmp = current * 10;
        make_numbers(tmp + 3, max, count);
        make_numbers(tmp + 5, max, count);
        make_numbers(tmp + 7, max, count);
    }
}

int main() {
    int n;
    cin >> n;

    int count = 0;
    make_numbers(0, n, count);
    cout << count << '\n';
}

