#include "Singleton.h"

// Initialize static instance
Singleton* Singleton::instance = nullptr;

// Define constructor
Singleton::Singleton() {
    std::cout << "Singleton created!" << std::endl;
}

// Define method to get instance
Singleton* Singleton::getInstance() {
    if (instance == nullptr) {
        instance = new Singleton();
    }
    return instance;
}

// Define sayHello method
void Singleton::sayHello() {
    std::cout << "Hello from Singleton!" << std::endl;
}

int main() {
    // Access the singleton instance and call a method
    Singleton::getInstance()->sayHello();

    // Access the singleton instance again to demonstrate it's the same instance
    Singleton::getInstance()->sayHello();

    return 0;
}