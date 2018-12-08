#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int results[1001][1001];

int lcs(string x, string y)
{
    // initialize
    for (int i = 0; i < 1001; ++i) {
        for (int j = 0; j < 1001; ++j)
            results[i][j] = 0;
    }

    int maxlcs = 0;
    // start from 1 for results array
    for (int i = 1; i <= x.length(); ++i) {
        for (int j = 1; j <= y.length(); ++j) {
            // sub 1 to access to nth character (because results array is considered as 1 origin but string is 0 origin)
            if (x[i-1] == y[j-1])
                results[i][j] = results[i-1][j-1] + 1;
            else
                results[i][j] = max(results[i-1][j], results[i][j-1]);

            if (maxlcs < results[i][j])
                maxlcs = results[i][j];
        }
    }
    return maxlcs;
}

int main()
{
    int n;
    cin >> n;

    vector<string> x(n);
    vector<string> y(n);
    for (int i = 0; i < n; ++i)
        cin >> x[i] >> y[i];

    for (int i = 0; i < n; ++i)
        cout << lcs(x[i], y[i]) << '\n';
}

