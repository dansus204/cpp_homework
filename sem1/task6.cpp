#include <stdio.h>
#include <iostream>

using namespace std;

struct Book {
    char title[100];
    int pages;
    float price;
};

bool isExpensive(const Book& b) {
    return b.price > 1000;
}

int main() {
    Book b;
    b.price = 1001;
    cout << (isExpensive(b)? 'y':'n') << '\n';
    return 0;
}
