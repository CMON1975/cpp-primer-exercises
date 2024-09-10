# Compiler and flags
CXX = g++
CXXFLAGS = -std=c++11

# Find all cpp files in all subdirectories
SOURCES = $(wildcard */*.cpp)

# Create corresponding executable names (executables will be placed in their subdirectories)
EXECUTABLES = $(SOURCES:.cpp=.exe)

# Default target: build all executables
all: $(EXECUTABLES)

# Rule to build each executable and place it in the same subdirectory
%.exe: %.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

# Clean target: remove all executables
clean:
	rm -f */*.exe
