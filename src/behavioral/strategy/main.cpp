#include <iostream>
#include "behavioral/strategy/strategy.hpp"

int main(void)
{
    Area_Calculator object;
    int a, b, action;

    std::cout << "Let's calculate the geometric areas.\n";
    std::cout << "In which geometric area are you interested:\n";
    std::cout << "1-Diamond area\n2-Triangle area\n3-Rectangle area\n";
    if (!(std::cin >> action))
        return 1;

    std::cout << "Enter a number a: ";
    if (!(std::cin >> a))
        return 1;

    std::cout << "Enter a number b: ";
    if (!(std::cin >> b))
        return 1;

    switch (action)
    {
    case 1:
        object.setOperation(new Diamond());
        break;

    case 2:
        object.setOperation(new Triangle());
        break;

    case 3:
        object.setOperation(new Rectangle());
        break;

    default:
        break;
    }

    int result = object.executeOperation(a, b);

    std::cout << result << std::endl;

    return 0;
}
