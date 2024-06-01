# g++ main.cpp -lraylib -lGL -lm -lpthread -ldl -lrt -lX11 -o raylib000

# build:
# 	g++ main.cpp -lraylib -o raylib000
#
# run:
# 	./app
#
# start: build run
CXX = g++
CXXFLAGS = -Wall -std=c++11

# Define the source files and the output executable
SRCS = main.cpp\
	   src/app.cpp\
	   src/utils/argparser.cpp\
	   src/ui/ui.cpp\
	   src/ui/selection_box.cpp\
	   src/environment/environment.cpp\
	   src/environment/grid.cpp

OBJS = $(SRCS:.cpp=.o)
EXEC = app

# Raylib library location
LDFLAGS = -lraylib

# Default target
all: $(EXEC)

# Rule to build the executable
$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

# Rule to build object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Rule to clean the build directory
clean:
	rm -f $(OBJS) $(EXEC)

# Rule to run the application
run: $(EXEC)
	./$(EXEC)

# Rule to build and run the application
start: clean all run 
