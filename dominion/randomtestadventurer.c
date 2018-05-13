#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "rngs.h"
#include <stdlib.h>
#include <time.h>

#define MAX_TESTS 1000

int main () {
	int k[10] = {adventurer, gardens, embargo, village, minion, mine, cutpurse, sea_hag, tribute, smithy};

	int i, j, n, players, player = 0, handCount, deckCount, seed, address, position;
	struct gameState state;
	
	srand(time(NULL));
	
	printf("---  Random Tests for ADVENTURER  ---");
	
	for(i = 0; i < MAX_TESTS; i++)
	{
		seed = rand();
		players = (rand() % 3) + 2;
		initializeGame(players, k, seed, &state);
		
		deckCount = (rand() % 25) + 1;
		
		state.deckCount[player] = deckCount;
		state.handCount[player] = (rand() % 6) + 1;
		
		position = (rand() % state.handCount[player]) + 1;
		
		state.hand[player][position] = adventurer;
		
		for(j = 0; j < deckCount; j++)
		{
			if(j == position)
				continue;
			
			state.deck[player][j] = (rand() % 17) + 1;
		}
		
		printf("\nInputs:\nDeck Count: %d\tHand Count: %d\t, Players: %d\t Position: %d\n", deckCount, state.handCount[player], players, position);
		
		playCard(adventurer, 1, 1, 1, &state);
	}

	return 0;
}
