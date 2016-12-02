#include "librandom.h"

#include <stdlib.h>
#include <time.h>

int generate_random_number(int max_range) {
	int randomValue = 0;

	if (max_range) {
		srand(time(NULL));
		randomValue = (rand() % max_range) + 1;
	}

	return randomValue;
}
