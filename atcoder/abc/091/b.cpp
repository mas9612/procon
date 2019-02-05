#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    map<string, int> m;

    int N;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        string s;
        cin >> s;

        if (m.find(s) != m.end()) {
            int t = m[s];
            m[s] = t + 1;
        } else {
            m[s] = 1;
        }
    }

    int M;
    cin >> M;
    for (int i = 0; i < M; ++i) {
        string s;
        cin >> s;

        if (m.find(s) != m.end()) {
            int t = m[s];
            m[s] = t - 1;
        } else {
            m[s] = -1;
        }
    }

    map<string, int>::iterator itr = m.begin();
    string max_str = itr->first;
    for (; itr != m.end(); ++itr) {
        if (itr->second > m[max_str])
            max_str = itr->first;
    }

    if (m[max_str] > 0)
        cout << m[max_str] << '\n';
    else
        cout << 0 << '\n';
}
