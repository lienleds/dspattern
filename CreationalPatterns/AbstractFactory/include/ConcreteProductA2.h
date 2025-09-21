#pragma once
#include "ProductA.h"

class ConcreteProductA2 : public ProductA {
public:
    std::string FunctionA() const override;
};
