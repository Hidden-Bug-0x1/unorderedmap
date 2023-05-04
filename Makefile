CXX = g++
CPPFLAGS = -Wall

FILES = linkedlist main unorderedmap

SRCS = $(FILES:%=srcs/%.cpp)
OBJS = $(FILES:%=objs/%.o)

all: program

program: $(OBJS)
	$(CXX) $(CPPFLAGS) $(OBJS) -o program

objs/%.o: srcs/%.cpp
	$(CXX) $(CPPFLAGS) -c $< -MMD -o $@

clean:
	$(RM) -r objs/*
