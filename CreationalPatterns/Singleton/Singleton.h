#pragma once
#include <iostream>

class Singleton {
private:
    // Constructor private để ngăn không cho tạo instance trực tiếp
    Singleton();

    // Cấm copy
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;

    // Instance duy nhất
    static Singleton* instance;

public:
    // Phương thức truy cập instance duy nhất
    static Singleton* getInstance();

    void sayHello();
};