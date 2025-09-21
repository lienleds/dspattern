#pragma once
#include <string>

class ProductB {
public:
    virtual ~ProductB() {}
    virtual std::string FunctionB() const = 0;
};
