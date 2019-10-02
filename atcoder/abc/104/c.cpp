#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int solve(int g, vector<pair<int, int>>& scores, vector<int>& complete,
          vector<bool> used, int current) {
    int size = scores.size();
    if (current >= size) {
        int count = 0;
        int score = 0;
        for (int i = 0; i < size; ++i) {
            if (used[i]) {
                count += scores[i].first;
                score += complete[i];
            }
        }

        if (score >= g) {
            return count;
        } else {
            bool flag = false;
            for (int i = size - 1; i >= 0; --i) {
                if (used[i])
                    continue;

                for (int j = 0; j < scores[i].first; ++j) {
                    score += (i + 1) * 100;
                    ++count;
                    if (score >= g) {
                        flag = true;
                        break;
                    }
                }
                if (flag)
                    break;
                score += scores[i].second;
            }
            return count;
        }
    } else {
        int res = solve(g, scores, complete, used, current + 1);
        used[current] = true;
        res = min(res, solve(g, scores, complete, used, current + 1));
        return res;
    }
}

int main() {
    int d, g;
    cin >> d >> g;

    vector<pair<int, int>> scores(d);
    for (int i = 0; i < d; ++i) {
        int p, c;
        cin >> p >> c;
        scores[i] = make_pair(p, c);
    }

    vector<int> complete(d);
    for (int i = 0; i < d; ++i)
        complete[i] = (i + 1) * 100 * scores[i].first + scores[i].second;

    vector<bool> used(d, false);
    int count = solve(g, scores, complete, used, 0);
    cout << count << '\n';
}

