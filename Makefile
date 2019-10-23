# MAKE FILE

Make file ref:
CXX = g++
RM = rm -f

HEADDIR = header/log_includes
CXXFLAGS = -Wall -I$(HEADDIR)
LDFLAGS = -std=c++11
LDLIBS = -lz

SRCDIR = source/log
BINDIR = build/objects
TARGET = $(BINDIR)

INCLUDES = $(wildcard $(HEADDIR)/.h)
SRCS = source/main.cpp $(wildcard $(SRCDIR)/.cpp)

all: tool $(TARGET)

tool: $(SRCS) $(INCLUDES)
	$(CXX) $(LDFLAGS) $(SRCS) -o $(TARGET) $(LDLIBS) $(CXXFLAGS)
	@echo "Compiled "$<" successfully!"

clean:
	$(RM) $(BINDIR)/Objects
	@echo "Cleanup bin complete!"


