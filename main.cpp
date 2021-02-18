//
// Created by leibi on 2021/2/18.
//

#include "data/stock.h"

int main() {
    Stock instance(10.0, 20.0, 5.0, 25.0, 1613659249);

    std::cout << instance.description()
              << std::endl;

    return 0;
}