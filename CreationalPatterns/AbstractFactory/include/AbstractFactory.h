#pragma once
#include "ProductA.h"
#include "ProductB.h"

class AbstractFactory {
public:
    virtual ~AbstractFactory() {}
    virtual ProductA* CreateProductA() const = 0;
    virtual ProductB* CreateProductB() const = 0;
};
