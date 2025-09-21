CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra -Iinclude
TARGET = abstract_factory
SRC = $(wildcard src/*.cpp)

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET)
