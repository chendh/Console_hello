﻿// main.cpp
#include <iostream>

void printMultiplicationTable(int n) {
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            std::cout << i * j << "\t";
        }
        std::cout << std::endl;
    }
}

int main() {
    int n;
    std::cout << "請輸入乘法表的大小: ";
    std::cin >> n;

    printMultiplicationTable(n);

    return 0;
}
