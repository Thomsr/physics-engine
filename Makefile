# A simple Makefile for compiling small SDL projects

INC_DIR = include
SRC_DIR = src

# set the compiler
CC := g++

# set the compiler flags
CFLAGS := `sdl2-config --libs --cflags` -ggdb3 -O0 --std=c++11 -Wall -lSDL2_image -lm
# add header files here
HDRS := include/object.h include/physics-engine.h

# add source files here
SRCS := $(sort $(shell find $(SRC_DIR) -name '*.cc'))

# generate names of object files
OBJS := $(SRCS:.cc=.o)

# name of executable
EXEC := physics-engine

# default recipe
all: $(EXEC)
# recipe to clean the workspace
clean:
	rm -f $(EXEC) $(OBJS)
 
showfont: showfont.c Makefile
	$(CC) -o $@ $@.c $(CFLAGS) $(LIBS)

glfont: glfont.c Makefile
	$(CC) -o $@ $@.c $(CFLAGS) $(LIBS)

# recipe for building the final executable
$(EXEC): $(OBJS) $(HDRS) Makefile
	$(CC) -o $@ $(OBJS) $(CFLAGS)

# recipe for building object files
$(OBJS): $(@:.o=.cc) $(HDRS) Makefile
	$(CC) -o $@ $(@:.o=.cc) -c $(CFLAGS)


.PHONY: all clean