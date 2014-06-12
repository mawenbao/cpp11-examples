GCC := g++
CFLAGS := -g -std=c++11 -pedantic -Wall -Wextra -Werror
SOURCE := $(wildcard *.cpp)
OBJECTS := $(SOURCE:%.cpp=%.o)

all: help

help:
	@echo "C++11 examples"
	@echo "    make build - compile cpp source files."
	@echo "    make run   - compile(if neccessary) and run."
	@echo "    make clean - remove compiled object files."
	@echo "    make help  - show this message and exit."

run: build
	@for obj in $(OBJECTS); do\
		echo "[RUN] ./$${obj}";\
		sh -c "./$${obj}";\
		echo;\
	done;\

build: $(OBJECTS)

$(OBJECTS): %.o: %.cpp
	@echo -n "[BUILD] "
	$(GCC) $(CFLAGS) -o $@ $<

clean:
	rm -f $(OBJECTS)

.PHONY:
	all help run build clean

