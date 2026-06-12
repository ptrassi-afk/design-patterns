#ifndef ADAPTER_HPP
#define ADAPTER_HPP

class Figure
{
public:
    virtual double area() = 0;
    virtual ~Figure() = default;
};

class SquareCalculator
{
public:
    double areaSquare(double side);
};

class SquareAdapter : public Figure
{
private:
    SquareCalculator calculator;
    double side;

public:
    SquareAdapter(double l);

    double area() override;
};

#endif
