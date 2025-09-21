#pragma once
#include "ProductB.h"

class ConcreteProductB2 : public ProductB {
public:
    std::string FunctionB() const override;
};
