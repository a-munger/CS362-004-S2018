#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "rngs.h"
#include <stdlib.h>
#include <time.h>

#define MAX_TESTS 1000

//buyCard() Random Test

int main () {
	int i, s, players, player = 0, handCount, deckCount, seed, numBuys;
	struct gameState state;

	int k[10] = {adventurer, gardens, embargo, village, minion, mine, cutpurse, sea_hag, tribute, smithy};
	
	srand(time(NULL));
	
	printf("---  Random Tests for IS GAME OVER  ---");
	
	for(i = 0; i < MAX_TESTS; i++)
	{
		seed = rand();
		players = (rand() % 3) + 2;
		initializeGame(players, k, seed, &state);
		
		deckCount = (rand() % 25) + 1;
		
		state.deckCount[player] = deckCount;
		state.handCount[player] = (rand() % 6) + 1;
		
		state.numBuys = (rand() % 10) + 1;
		numBuys = state.numBuys;
		
		s = buyCard(numBuys, &state);
		
		printf("buyCard returned: %d\n", s);
	}

	return 0;
}
