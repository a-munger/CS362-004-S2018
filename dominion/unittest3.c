#include <stdlib.h>
#include <stdio.h>
#include "assert.h"
#include "dominion.h"
#include "rngs.h"
#include <time.h>'

//getCost()

int main () {
	assert(getCost(0) == 0);

	assert(getCost(adventurer) == 6);

	assert(getCost(3) == 5);

	assert(getCost(village) == 3);

	assert(getCost(baron) == 4);
	
	printf("getCost passed tests\n");

	return 0;
}
