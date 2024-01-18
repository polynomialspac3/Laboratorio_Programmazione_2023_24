# Makefile for compiling and running main.cpp and Subject.cpp
# g++ $(pkg-config --cflags --libs Qt5Widgets) -fPIC -o main main.cpp
# Compiler

CXX = g++
# Compiler flags
CXXFLAGS = -fPIC -I. $(shell pkg-config --cflags Qt5Widgets)

# Linker flags
LDFLAGS = $(shell pkg-config --libs Qt5Widgets)

# Output executables
OUTPUT_MAIN = main

# Source files
SRCS_MAIN = main.cpp pulsante.cpp barra.cpp
# Header files
HEADERS = subject.h barra.h pulsante.h observer.h

# Object files
OBJS_MAIN = $(SRCS_MAIN:.cpp=.o)

# Default target
all: $(OUTPUT_MAIN)

# Rule to compile .cpp to .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Rule to link object files to executable
$(OUTPUT_MAIN): $(OBJS_MAIN)
	$(CXX) $(OBJS_MAIN) -o $(OUTPUT_MAIN) $(LDFLAGS)

# Rule to run the executable
run: $(OUTPUT_MAIN)
	./$(OUTPUT_MAIN)

# Clean up
clean:
	rm -f $(OBJS_MAIN) $(OUTPUT_MAIN)
