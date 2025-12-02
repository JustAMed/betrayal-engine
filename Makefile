# -------------------------------
# Betrayal Engine Makefile (src/ layout)
# -------------------------------

CXX := g++
CXXFLAGS := -std=c++20 -Iinclude -Wall -Wextra
SRC := $(wildcard src/*.cpp)         # all cpp files in src/
OBJ := $(patsubst src/%.cpp, %.o, $(SRC))  # object files in root
TARGET := engine

# Default target
all: $(TARGET)

# Link object files into executable
$(TARGET): $(OBJ)
	$(CXX) $(OBJ) -o $(TARGET)

# Compile each cpp into object file
%.o: src/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean object files and executable
clean:
	rm -f $(OBJ) $(TARGET)

# Phony targets
.PHONY: all clean

