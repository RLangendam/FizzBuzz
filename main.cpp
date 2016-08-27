#include <iterator>
#include <iostream>
#include "FizzBuzz.hpp"

#define CATCH_CONFIG_RUNNER
#include "catch.hpp"

int main(int argc, char** argv) {
	FizzBuzz(std::ostream_iterator<std::string>(std::cout, "\n"));
	return Catch::Session().run(argc, argv);
}