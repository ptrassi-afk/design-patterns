#include <iostream>
#include "structural/adapter/adapter.hpp"

int main(void)
{
    Figure *figure = new SquareAdapter(5);

    std::cout << "Area: " << figure->area() << '\n';

    delete figure;
    return 0;
}
