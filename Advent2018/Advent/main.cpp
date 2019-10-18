// Advent.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"

#include <chrono>
#include <time.h>
#include <iostream>

#include "advent2018.h"

static constexpr size_t BACKSPLASH_SIZE = 1 << 20;

static const advent_t advent2018[] = {
	{ day01, "./input/day01.txt" },
	{ day02, "./input/day02.txt" },
	{ day03, "./input/day03.txt" },
	{ day04, "./input/day04.txt" },
	{ day05, "./input/day05.txt" },
};

int main()
{
    std::cout << "Hello World!\n"; 	

	for (auto& A : advent2018) {
		input_t input = { };
		(*A.fn)(input);
	}

	return 0;
}