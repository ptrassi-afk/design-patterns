#ifndef SINGLETON_HPP
#define SINGLETON_HPP

class Constant
{
private:
    static Constant *instance;
    double pi;

    Constant();

public:
    Constant(const Constant &) = delete;
    Constant &operator=(const Constant &) = delete;

    static Constant *getInstance();
    double getPi() const;
};

#endif
