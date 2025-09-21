#pragma once
#include "AbstractFactory.h"
#include "ConcreteProductA1.h"
#include "ConcreteProductB1.h"

class ConcreteFactory1 : public AbstractFactory {
public:
    ProductA* CreateProductA() const override;
    ProductB* CreateProductB() const override;
};
