#pragma once

#include <algorithm>

static std::size_t const outputCount = 100u;

template <typename OutputIterator>
void FizzBuzz(OutputIterator output) {
	std::generate_n(output, outputCount, []() -> std::string {
		return "";
	});
}