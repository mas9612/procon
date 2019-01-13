#include <algorithm>
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct City {
    int index;
    int prefecture;
    int year;
};

bool sort_by_year(City& a, City& b) { return a.year < b.year; }

int main() {
    int n, m;
    cin >> n >> m;

    vector<City> cities(m);
    for (int i = 0; i < m; ++i) {
        cin >> cities[i].prefecture >> cities[i].year;
        cities[i].index = i;
    }

    sort(cities.begin(), cities.end(), sort_by_year);
    vector<int> city_count(n + 1);
    vector<string> id(m);
    for (int i = 0; i < m; ++i) {
        int index = cities[i].index;
        ++city_count[cities[i].prefecture];

        char buffer[13];
        sprintf(buffer, "%06d%06d", cities[i].prefecture,
                city_count[cities[i].prefecture]);
        id[index] = buffer;
    }

    for (int i = 0; i < m; ++i)
        cout << id[i] << '\n';
}
