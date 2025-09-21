#include <iostream>
#include "ConcreteCreatorA.h"
#include "ConcreteCreatorB.h"

void ClientCode(const Creator& creator) {
    std::cout << creator.SomeOperation() << std::endl;
}

int main() {
    std::cout << "App: Launched with ConcreteCreatorA.\n";
    Creator* creatorA = new ConcreteCreatorA();
    ClientCode(*creatorA);
    delete creatorA;

    std::cout << "App: Launched with ConcreteCreatorB.\n";
    Creator* creatorB = new ConcreteCreatorB();
    ClientCode(*creatorB);
    delete creatorB;
    return 0;
}
