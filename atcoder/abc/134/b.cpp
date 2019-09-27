#include <iostream>

using namespace std;

int main() {
    int n, d;
    cin >> n >> d;

    int per_person = d * 2 + 1;
    int required = (n + (per_person - 1)) / per_person;
    cout << required << '\n';
}

