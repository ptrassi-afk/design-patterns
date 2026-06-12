#include <iostream>
#include "behavioral/strategy/strategy.hpp"

void Area_Calculator::setOperation(Operation *strategy)
{
    this->strategy = strategy;
}

int Area_Calculator::executeOperation(int a, int b)
{
    return this->strategy->execute(a, b);
}

int Diamond::execute(int a, int b)
{
    return (a * b) / 2;
}

int Triangle::execute(int a, int b)
{
    return a * b;
}

int Rectangle::execute(int a, int b)
{
    return (a * b) / 2;
}
