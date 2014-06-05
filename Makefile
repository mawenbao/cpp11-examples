GCC := g++
CFLAGS := -std=c++11 -pedantic -Wall -Wextra -Werror
SOURCE := $(wildcard *.cpp)
OBJECTS := $(SOURCE:%.cpp=%.o)

all: $(OBJECTS)

$(OBJECTS): %.o: %.cpp
	$(GCC) $(CFLAGS) -o $@ $<

clean:
	rm -f $(OBJECTS)

.PHONY:
	all clean

