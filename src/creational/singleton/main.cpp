#include <iostream>
#include "creational/singleton/singleton.hpp"

int main(void)
{
    Constant *c1 = Constant::getInstance();

    Constant *c2 = Constant::getInstance();

    std::cout << "PI: " << c1->getPi() << std::endl;

    if (c1 == c2)
        std::cout << "Same instance!" << std::endl;

    return 0;
}
