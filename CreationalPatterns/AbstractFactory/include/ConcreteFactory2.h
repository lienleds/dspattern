#pragma once
#include "AbstractFactory.h"
#include "ConcreteProductA2.h"
#include "ConcreteProductB2.h"

class ConcreteFactory2 : public AbstractFactory {
public:
    ProductA* CreateProductA() const override;
    ProductB* CreateProductB() const override;
};
