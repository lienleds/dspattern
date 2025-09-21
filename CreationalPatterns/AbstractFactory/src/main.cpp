#include <iostream>
#include "AbstractFactory.h"
#include "ConcreteFactory1.h"
#include "ConcreteFactory2.h"

void ClientCode(const AbstractFactory& factory) {
    ProductA* productA = factory.CreateProductA();
    ProductB* productB = factory.CreateProductB();
    std::cout << productA->FunctionA() << std::endl;
    std::cout << productB->FunctionB() << std::endl;
    delete productA;
    delete productB;
}

int main() {
    std::cout << "Client: Testing client code with the first factory type:\n";
    ConcreteFactory1 factory1;
    ClientCode(factory1);

    std::cout << "\nClient: Testing the same client code with the second factory type:\n";
    ConcreteFactory2 factory2;
    ClientCode(factory2);
    return 0;
}
