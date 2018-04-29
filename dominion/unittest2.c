#include <stdlib.h>
#include <stdio.h>
#include "assert.h"
#include "dominion.h"
#include "rngs.h"
#include <time.h>'

//isGameOver()

int main () {
	struct gameState state;
	int s;
	int k[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	initializeGame(2, k, 2, &state);

	state.supplyCount[province] = 0;

	s = isGameOver(&state);

	assert(s == 1);
	printf("isGameOver passed first test\n");

	state.supplyCount[1] = 0;
	state.supplyCount[4] = 0;
	state.supplyCount[7] = 0;

	s = isGameOver(&state);

	assert(s == 1);
	printf("isGameOver Passed second test\n");

	return 0;
}
