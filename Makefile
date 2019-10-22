# This is a make file for area
CXX = g++

CXXFLAGS = -std=c++0x -Wall -g

LIBS = -lz
#targets

main: main.o debug.o compress.o
	$(CXX) $(CXXFLAGS) main.o debug.o compress.o $(LIBS)
	
main.o: main.cpp prototype.h
	$(CXX) $(CXXFLAGS) -c main.cpp prototype.h
	
debug.o: debug.cpp prototype.h

compress.o: compress.cpp prototype.h 