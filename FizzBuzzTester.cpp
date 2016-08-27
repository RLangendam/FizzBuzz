#include <string>
#include <vector>
#include "FizzBuzz.hpp"
#include "catch.hpp"

SCENARIO("FizzBuzz") {
	std::vector<std::string> output;
	FizzBuzz(std::back_inserter(output));
	REQUIRE(output.size() == outputCount);
	REQUIRE(output.at(0) == "1");
}
