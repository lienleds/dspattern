#pragma once
#include "ProductA.h"

class ConcreteProductA1 : public ProductA {
public:
    std::string FunctionA() const override;
};
