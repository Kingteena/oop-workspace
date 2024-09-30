# Compiler

COMPILER := g++

# Compiler flags

CFLAGS := -std=c++11 -Wall -Wextra

# Executable name

EXECUTABLE_FILE := test_runner

# Source files

PREREQUISITES := main.cpp Invoice.cpp

# Build and run tests

all:
	g++ -Wall -o test_runner main.cpp InvoiceTest.h Invoice.cpp UnitTest.h EquivalenceTests.h Addition.h
    # $(COMPILER) $(CFLAGS) -o $(EXECUTABLE_FILE) $(PREREQUISITES)

    # ./test_runner

# Clean rule

clean:
    rm -f test_runner