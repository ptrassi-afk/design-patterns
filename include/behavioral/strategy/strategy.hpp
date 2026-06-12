#ifndef STRATEGY_HPP
#define STRATEGY_HPP

class Operation
{
public:
    virtual int execute(int a, int b) = 0;
    virtual ~Operation() = default;
};

class Diamond : public Operation
{
public:
    int execute(int a, int b) override;
};

class Triangle : public Operation
{
public:
    int execute(int a, int b) override;
};

class Rectangle : public Operation
{
public:
    int execute(int a, int b) override;
};

class Area_Calculator
{
private:
    Operation *strategy;

public:
    void setOperation(Operation *strategy);
    int executeOperation(int a, int b);
};

#endif
