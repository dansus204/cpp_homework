#include <iostream>

using namespace std;

void truncateToDot(std::string& s) {
    int sz = s.length();
    int i = 0;
    while (s[i++] != '.');
    string_view result = s;
    result.remove_suffix(sz - i + 1);
    s = result;
}

int main() {
    string s = "abc.ab.s";
    truncateToDot(s);
    cout << s;
    return 0;
}

