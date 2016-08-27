.PHONY: all clean distclean

External:=$(shell test -e "catch.hpp" || wget https://raw.githubusercontent.com/philsquared/Catch/master/single_include/catch.hpp)

Headers:=$(wildcard *.hpp)
Sources:=$(wildcard *.cpp)
Objects:=$(patsubst %.cpp,%.o,$(Sources))
Dependencies:=$(patsubst %.cpp,%.d,$(Sources))

all: app
	@./$<

-include $(Dependencies)

$(Dependencies): $(Headers)

app: $(Objects)
	@g++ -o $@ $^

%.d: %.cpp
	@g++ -o $@ -MM $<

%.o: %.cpp
	@g++ -o $@ -c $<

clean:
	-@rm $(wildcard *.o) app

rmdeps:
	-@rm $(wildcard *.d)

distclean: clean rmdeps
	-@rm catch.hpp