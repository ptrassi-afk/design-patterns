#include <iostream>
#include "structural/adapter/adapter.hpp"

double SquareCalculator::areaSquare(double side)
{
    return side * side;
}

SquareAdapter::SquareAdapter(double l) : side(l) {}

double SquareAdapter::area()
{
    return calculator.areaSquare(side);
}
