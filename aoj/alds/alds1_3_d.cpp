#include <algorithm>
#include <iostream>
#include <stack>
#include <string>
#include <utility>
#include <vector>

using namespace std;

int main() {
    string str;
    cin >> str;

    stack<int> s;
    stack<pair<int, int>> s2;

    int sum_of_area = 0;
    for (int i = 0; i < str.length(); ++i) {
        if (str[i] == '\\') {
            s.push(i);
        } else if (str[i] == '/') {
            if (s.empty())
                continue;

            int start = s.top();
            int area = i - start;
            sum_of_area += area;
            s.pop();

            if (!s2.empty()) {
                pair<int, int> prev = s2.top();
                while (prev.first > start) {
                    s2.pop();
                    area += prev.second;

                    if (s2.empty())
                        break;
                    prev = s2.top();
                }
            }
            s2.push(make_pair(start, area));
        }
    }

    vector<int> partial;
    while (!s2.empty()) {
        partial.push_back(s2.top().second);
        s2.pop();
    }
    reverse(partial.begin(), partial.end());

    cout << sum_of_area << '\n';
    cout << partial.size();
    for (int i = 0; i < partial.size(); ++i)
        cout << ' ' << partial[i];
    cout << '\n';
}

