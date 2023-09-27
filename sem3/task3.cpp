#include <iostream>

using namespace std;

string operator*(string s, int n) {
    string result{s};
    for (int i = 1; i < n; ++i)
        result.append(s);
    return result;
}

int main() {
    string s = "abc";
    cout << s*10;
    return 0;
}

