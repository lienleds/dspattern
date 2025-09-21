#pragma once
#include "ProductB.h"

class ConcreteProductB1 : public ProductB {
public:
    std::string FunctionB() const override;
};
