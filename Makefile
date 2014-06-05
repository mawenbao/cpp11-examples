GCC := g++
FLAGS := -std=c++11 -Wall -Werror
SOURCE := $(wildcard *.cpp)
OBJECTS := $(SOURCE:%.cpp=%.o)

all: $(OBJECTS)

$(OBJECTS): %.o: %.cpp
	$(GCC) $(FLAGS) -o $@ $<

clean:
	rm -f $(OBJECTS)

.PHONY:
	all clean

