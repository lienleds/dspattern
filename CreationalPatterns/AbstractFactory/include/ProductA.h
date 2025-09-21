#pragma once
#include <string>

class ProductA {
public:
    virtual ~ProductA() {}
    virtual std::string FunctionA() const = 0;
};
