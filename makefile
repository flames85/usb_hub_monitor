TARGET = usb_hub_monitor

LDFLAGS = -march=x86-64

INCLUDES =

LIBS =

CXXFLAGS = -g -O2 -Wall $(LDFLAGS) 

CXX := g++
CC  := gcc
SRCS := $(wildcard *.cpp)
OBJS := $(patsubst %cpp,%o,$(SRCS)) 

all: $(TARGET)

# build
%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $<

# link
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(INCLUDES) -o $@ $^ $(LIBS)

clean:
	rm -rf $(TARGET) *.o
