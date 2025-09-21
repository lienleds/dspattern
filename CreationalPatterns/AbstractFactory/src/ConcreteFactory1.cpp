#include "ConcreteFactory1.h"
#include "ConcreteProductA1.h"
#include "ConcreteProductB1.h"

ProductA* ConcreteFactory1::CreateProductA() const {
    return new ConcreteProductA1();
}

ProductB* ConcreteFactory1::CreateProductB() const {
    return new ConcreteProductB1();
}
