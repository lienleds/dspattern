#pragma once
#include "Creator.h"
#include "ConcreteProductA.h"


class ConcreteCreatorA : public Creator {
public:
    Product* FactoryMethod() const override;
};
