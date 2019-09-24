#include <iostream>

using namespace std;

int cache[45];

int fibonacci(int n) {
    if (cache[n] != -1) {
        return cache[n];
    } else {
        int ret = fibonacci(n - 1) + fibonacci(n - 2);
        cache[n] = ret;
        return ret;
    }
}

int main() {
    for (int i = 0; i < 45; ++i)
        cache[i] = -1;
    cache[0] = cache[1] = 1;

    int n;
    cin >> n;
    cout << fibonacci(n) << '\n';
}

