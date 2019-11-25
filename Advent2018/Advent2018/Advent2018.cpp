#include <stdio.h>
#include <stdlib.h>
#include <chrono>
#include <time.h>
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <set>
#include <algorithm>
#include <regex>

#define CRASH *(int*)0=0
#define assert(expr) if (!(expr)) { fprintf(stderr, "FAILED assertion [" __FILE__ ":%i] " #expr "\n", __LINE__);  CRASH; }

#include "Shared/Types.h"
#include "Shared/DateTime.hpp"

#include "FileHelper.hpp"


namespace day01 {
#include "Day01.hpp"
}
namespace day02 {
#include "Day02.hpp"
}
namespace day03 {
#include "Day03.hpp"
}
namespace day04 {
#include "Day04.hpp"
}
namespace day05 {
#include "Day05.hpp"
}
namespace day06 {
#include "Day06.hpp"
}

int main()
{
	printf("Advent of Code 2018\n\n");

	day01::day01("./input/day01.txt");
	day02::day02("./input/day02.txt");
	day03::day03("./input/day03.txt");
	day04::day04("./input/day04.txt");
	day05::day05("./input/day05.txt");
	day06::day06("./input/day06.txt");

	return 0;
}

/*
	auto m = malloc(1024);
	memset(m, 255, 1024);

	DateTime* dt = new (m) DateTime;
	printf("%u\n", dt->u[24]);
	*/
