# This is a make file 

CXX = g++

CXXFLAGS = -std=c++0x -Wall -g

LIBS = -lz

RM = rm -f

#location

HEADDIR := header

SRCDIR := source/log

BINDIR := build/bin


TARGET := $(BINDIR)

INCLUDES := $(wildcard $(HEADDIR)/.h)

SRCS := source/main.cpp $(wildcard $(SRCDIR)/.cpp)


all: tool $(TARGET)

tool: $(SRCS) $(INCLUDES)
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(TARGET) $(LIBS)
@echo "Compiled "$<" successfully!"

clean:
	$(RM) $(BINDIR)
@echo "Cleanup bin complete!"
