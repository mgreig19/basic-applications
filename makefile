#

# Compiler variables
CCFLAGS = -Wall -std=c++11

# Rule to link object code files to create executable file
processApp: Process.o
	g++ $(CCFLAGS) -o processApp processApp.o Process.o

# Rules to compile source code files to object code
processApp.o: Process.cpp Process.h
	g++ $(CCFLAGS) -c processApp.cpp

Process.o: Process.cpp Process.h
	g++ $(CCFLAGS) -c Process.cpp

# Pseudo-target to remove object code and executable files
clean:
	-rm *.o processApp
