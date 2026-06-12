#include <iostream>
#include "creational/singleton/singleton.hpp"

Constant *Constant::instance = nullptr;

Constant::Constant() : pi(3.14159265359) {};

Constant *Constant::getInstance()
{
    if (instance == nullptr)
        instance = new Constant();

    return instance;
}

double Constant::getPi() const
{
    return pi;
}
