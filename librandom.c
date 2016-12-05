#include "librandom.h"

#include <stdlib.h>
#include <time.h>

int get_number(int max_range) {
	return generate_random_number(max_range);
}

int generate_random_number(int max_range) {
	int randomValue = 0;

	if (max_range) {
		srand(time(NULL));
		randomValue = (rand() % max_range) + 1;
	}

	return randomValue;
}
