#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

struct Card {
    char c;
    int n;
};

void print_cards(vector<Card> c, int length) {
    cout << c[0].c << c[0].n;
    for (int i = 1; i < length; ++i)
        cout << ' ' << c[i].c << c[i].n;
    cout << '\n';
}

void bubble_sort(vector<Card>& c, int length) {
    for (int i = 0; i < length; ++i) {
        for (int j = length - 1; j > i; --j) {
            if (c[j].n < c[j - 1].n)
                swap(c[j], c[j - 1]);
        }
    }
}

void selection_sort(vector<Card>& c, int length) {
    for (int i = 0; i < length; ++i) {
        int min_idx = i;
        for (int j = i; j < length; ++j) {
            if (c[j].n < c[min_idx].n)
                min_idx = j;
        }
        swap(c[i], c[min_idx]);
    }
}

bool is_stable(vector<Card>& stable, vector<Card>& c, int length) {
    for (int i = 0; i < length; ++i) {
        if (stable[i].c != c[i].c || stable[i].n != c[i].n)
            return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    vector<Card> cards(n);
    for (int i = 0; i < n; ++i)
        cin >> cards[i].c >> cards[i].n;

    vector<Card> bubble(n);
    copy(cards.begin(), cards.end(), bubble.begin());
    bubble_sort(bubble, n);

    vector<Card> selection(n);
    copy(cards.begin(), cards.end(), selection.begin());
    selection_sort(selection, n);

    print_cards(bubble, n);
    cout << "Stable\n";

    print_cards(selection, n);
    if (is_stable(bubble, selection, n))
        cout << "Stable\n";
    else
        cout << "Not stable\n";
}

