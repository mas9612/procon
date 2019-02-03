#include <iostream>
#include <utility>
#include <vector>

using namespace std;

struct Card {
    char suit;
    int value;
};

void bubble_sort(vector<Card>& cards) {
    int size = cards.size();
    for (int i = 0; i < size - 1; ++i) {
        for (int j = size - 1; j > i; --j) {
            if (cards[j].value < cards[j - 1].value)
                swap(cards[j], cards[j - 1]);
        }
    }
}

void selection_sort(vector<Card>& cards) {
    int size = cards.size();
    for (int i = 0; i < size - 1; ++i) {
        int min_card = i;
        for (int j = i + 1; j < size; ++j) {
            if (cards[min_card].value > cards[j].value)
                min_card = j;
        }
        swap(cards[i], cards[min_card]);
    }
}

bool is_stable(vector<Card>& c1, vector<Card>& c2) {
    if (c1.size() != c2.size())
        return false;

    int size = c1.size();
    for (int i = 0; i < size; ++i) {
        if (c1[i].suit != c2[i].suit || c1[i].value != c2[i].value)
            return false;
    }
    return true;
}

void print_cards(vector<Card>& cards) {
    int size = cards.size();
    cout << cards[0].suit << cards[0].value;
    for (int i = 1; i < size; ++i)
        cout << ' ' << cards[i].suit << cards[i].value;
    cout << '\n';
}

int main() {
    int n;
    cin >> n;

    vector<Card> cards(n);
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        cards[i].suit = s[0];
        cards[i].value = s[1] - '0';
    }
    vector<Card> cards2(cards);

    bubble_sort(cards);
    selection_sort(cards2);

    print_cards(cards);
    cout << "Stable\n";

    print_cards(cards2);
    if (is_stable(cards, cards2))
        cout << "Stable\n";
    else
        cout << "Not stable\n";
}
