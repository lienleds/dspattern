# Makefile for compiling Singleton.cpp

CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra
TARGET = singleton
SRC = Singleton.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET)
