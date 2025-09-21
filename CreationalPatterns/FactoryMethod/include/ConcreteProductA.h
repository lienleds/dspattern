#pragma once
#include "Product.h"


class ConcreteProductA : public Product {
public:
    std::string Operation() const override;
};
