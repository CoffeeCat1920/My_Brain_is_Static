# Define the compiler
CXX = g++

# Define the directories
SRCDIR = src
INCDIR = include
BINDIR = bin
LIBDIR = lib

# Define the target executable
TARGET = $(BINDIR)/app

# Define the source files
SOURCES = $(wildcard $(SRCDIR)/*.cpp)

# Define the object files
OBJECTS = $(patsubst $(SRCDIR)/%.cpp, $(BINDIR)/%.o, $(SOURCES))

# Define the compiler flags
CXXFLAGS = -I$(INCDIR)

# Define the linker flags
LDFLAGS = -L$(LIBDIR) -lraylib

# Default rule to build the target
all: $(TARGET)

# Rule to link the object files into the target executable
$(TARGET): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $@ $(LDFLAGS)

# Rule to compile source files into object files
$(BINDIR)/%.o: $(SRCDIR)/%.cpp
	mkdir -p $(BINDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up generated files
clean:
	rm -rf $(BINDIR)/*.o $(TARGET)
