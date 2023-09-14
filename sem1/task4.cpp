#include <stdio.h>
#include <iostream>

using namespace std;

void countLetters(const char* str, int& numLetters, int& numDigits, int& numOther) {
    numDigits = 0;
    numLetters = 0;
    numOther = 0;

    int i = 0;
    while (str[i]) {
        if (isalpha(str[i]))
            numLetters++;
        else if (isdigit(str[i]))
            numDigits++;
        else
            numOther++;
        ++i;
    }
}

int main() {
    char str[] = "asda54654\n\n";
    int numDigits, numLetters, numOther;
    countLetters(str, numLetters, numDigits, numOther);
    cout << "abc: " << numLetters << "\n123: " << numDigits << "\n!@#: " << numOther << '\n';
    return 0;
}
