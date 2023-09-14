#include <stdio.h>
#include <iostream>

using namespace std;

struct Book {
    char title[100];
    int pages;
    float price;
};

void addPrice(Book& b, float x) {
    b.price += x;
}

int main() {
    
    return 0;
}
