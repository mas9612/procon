#include <iostream>

using namespace std;

int memo[45];

int fibonacchi(int num)
{
    if (memo[num] != -1) {
        return memo[num];
    } else if (num == 0 || num == 1) {
        memo[num] = 1;
        return memo[num];
    } else {
        int result = fibonacchi(num - 1) + fibonacchi(num - 2);
        memo[num] = result;
        return memo[num];
    }
}

int main()
{
    for (int i = 0; i < 45; ++i)
        memo[i] = -1;

    int n;
    cin >> n;
    cout << fibonacchi(n) << '\n';
}

