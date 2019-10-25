# MAKE FILE

Make file ref:
CXX = g++
RM = rm -f

HEADDIR = header/logger_header
CXXFLAGS = -Wall -I$(HEADDIR)
LDFLAGS = -std=c++11
LDLIBS = -lz

SRCDIR = source/logger_source
BINDIR = build/objects
TARGET = $(BINDIR)/logcompress

INCLUDES = $(wildcard $(HEADDIR)/*.h) 
SRCS = source/main.cpp $(wildcard $(SRCDIR)/*.cpp) 

all: tool $(TARGET)

tool: $(SRCS) $(INCLUDES)
	$(CXX) $(LDFLAGS) $(SRCS) -o $(TARGET) $(LDLIBS) $(CXXFLAGS)
	@echo "Compiled "$<" successfully!"

clean:
	$(RM) $(BINDIR)/logcompress
	@echo "Cleanup bin complete!"


