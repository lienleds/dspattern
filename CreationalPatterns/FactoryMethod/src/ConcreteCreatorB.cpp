#include "ConcreteCreatorB.h"
#include "ConcreteProductB.h"

Product* ConcreteCreatorB::FactoryMethod() const {
    return new ConcreteProductB();
}
