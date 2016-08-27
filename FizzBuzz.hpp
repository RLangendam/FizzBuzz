#pragma once

#include <algorithm>
#include <string>

static std::size_t const outputCount = 100u;
static std::string const fizz("Fizz");

template <typename OutputIterator>
void FizzBuzz(OutputIterator output) {
	std::size_t counter(1u);
	std::generate_n(output, outputCount, [&counter](){
		std::string result;
		if(counter == 3u) {
			result = fizz;
		}
		else {
			result = std::to_string(counter);
		}
		++counter;
		return result;
	});
}