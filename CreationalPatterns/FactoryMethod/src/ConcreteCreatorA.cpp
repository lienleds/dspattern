#include "ConcreteCreatorA.h"
#include "ConcreteProductA.h"

Product* ConcreteCreatorA::FactoryMethod() const {
    return new ConcreteProductA();
}
