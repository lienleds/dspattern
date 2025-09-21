# Makefile for Factory Method example

CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra -Iinclude
TARGET = factory_method
SRC = src/ConcreteCreatorA.cpp src/ConcreteCreatorB.cpp src/ConcreteProductA.cpp src/ConcreteProductB.cpp src/Main.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET)
