#pragma once
#include <string>

class Base
{
protected:
    int price;
    std::string name;

public:
    virtual int getPrice();
    virtual std::string getName();
    virtual ~Base() = default;
    Base();
};