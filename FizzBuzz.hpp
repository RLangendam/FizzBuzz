#pragma once

#include <algorithm>
#include <string>

static std::size_t const outputCount = 100u;

template <typename OutputIterator>
void FizzBuzz(OutputIterator output) {
	std::size_t counter(1u);
	std::generate_n(output, outputCount, [&counter](){
		return std::to_string(counter++);
	});
}