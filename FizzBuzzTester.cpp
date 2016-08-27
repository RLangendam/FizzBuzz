#include <string>
#include <vector>
#include "FizzBuzz.hpp"
#include "catch.hpp"

SCENARIO("FizzBuzz") {
	std::vector<std::string> output;
	FizzBuzz(std::back_inserter(output));
	REQUIRE(output.size() == outputCount);
	REQUIRE(output.at(0u) == "1");
	REQUIRE(output.at(1u) == "2");
	REQUIRE(output.at(2u) == fizz);
	REQUIRE(output.at(4u) == buzz);
	REQUIRE(output.at(5u) == fizz);
	REQUIRE(output.at(9u) == buzz);
}
