#include "ConcreteFactory2.h"
#include "ConcreteProductA2.h"
#include "ConcreteProductB2.h"

ProductA* ConcreteFactory2::CreateProductA() const {
    return new ConcreteProductA2();
}

ProductB* ConcreteFactory2::CreateProductB() const {
    return new ConcreteProductB2();
}
