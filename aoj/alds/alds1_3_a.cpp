#include <iostream>
#include <string>
#include <vector>

using namespace std;

void split(string s, char delim, vector<string>& rs) {
    string::size_type pos = s.find(delim);
    string::size_type start = 0;

    while (pos != string::npos) {
        rs.push_back(s.substr(start, pos - start));
        start = pos + 1;
        pos = s.find(delim, start);
    }
    rs.push_back(s.substr(start, s.length() - start + 1));
}

int pop(vector<int>& stack) {
    int last = stack.back();
    stack.pop_back();
    return last;
}

int main() {
    string s;
    getline(cin, s);
    vector<string> words;
    split(s, ' ', words);

    vector<int> stack;
    int len = words.size();
    for (int i = 0; i < len; ++i) {
        if (words[i] == "+") {
            int a = pop(stack);
            int b = pop(stack);
            stack.push_back(a + b);
        } else if (words[i] == "-") {
            int a = pop(stack);
            int b = pop(stack);
            stack.push_back(b - a);
        } else if (words[i] == "*") {
            int a = pop(stack);
            int b = pop(stack);
            stack.push_back(a * b);
        } else {
            int num = stoi(words[i]);
            stack.push_back(num);
        }
    }
    cout << pop(stack) << '\n';
}
