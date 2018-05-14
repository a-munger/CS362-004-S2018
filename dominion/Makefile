CFLAGS = -Wall -fpic -coverage -lm

rngs.o: rngs.h rngs.c
	gcc -c rngs.c -g  $(CFLAGS)

dominion.o: dominion.h dominion.c rngs.o
	gcc -c dominion.c -g  $(CFLAGS)

playdom: dominion.o playdom.c
	gcc -o playdom playdom.c -g dominion.o rngs.o $(CFLAGS)
#To run playdom you need to entere: ./playdom <any integer number> like ./playdom 10*/
testDrawCard: testDrawCard.c dominion.o rngs.o
	gcc  -o testDrawCard -g  testDrawCard.c dominion.o rngs.o $(CFLAGS)

badTestDrawCard: badTestDrawCard.c dominion.o rngs.o
	gcc -o badTestDrawCard -g  badTestDrawCard.c dominion.o rngs.o $(CFLAGS)

testBuyCard: testDrawCard.c dominion.o rngs.o
	gcc -o testDrawCard -g  testDrawCard.c dominion.o rngs.o $(CFLAGS)

testAll: dominion.o testSuite.c
	gcc -o testSuite testSuite.c -g  dominion.o rngs.o $(CFLAGS)

interface.o: interface.h interface.c
	gcc -c interface.c -g  $(CFLAGS)
	
randomtestadventurer.out:
	make all
	make randomadventurer
	echo "------- RUNNING RANDOM TEST ADVENTURER: Printout -------------" >> randomtestadventurer.out
	echo "All" >> randomtestadventurer.out
	echo "----------- COVERAGE ---------------" >> randomtestadventurer.out
	gcov -f -b dominion.c >> randomtestadventurer.out
	echo "Results now written to file randomtestadventurer.out"
	echo "Please open or CAT to view"
	
randomtestcard1.out:
	make all
	make randomtestcard1
	echo "------- RUNNING RANDOM TEST CARD 1: Printout -------------" >> randomtestcard1.out
	echo "All" >> randomtestcard1.out
	echo "----------- COVERAGE ---------------" >> randomtestcard1.out
	gcov -f -b dominion.c >> randomtestcard1.out
	echo "Results now written to file randomtestcard1.out"
	echo "Please open or CAT to view"
	
randomtestcard2.out:
	make all
	make randomtestcard2
	echo "------- RUNNING RANDOM TEST CARD 1: Printout -------------" >> randomtestcard2.out
	echo "All" >> randomtestcard2.out
	echo "----------- COVERAGE ---------------" >> randomtestcard2.out
	gcov -f -b dominion.c >> randomtestcard2.out
	echo "Results now written to file randomtestcard2.out"
	echo "Please open or CAT to view"

runtests: testDrawCard 
	./testDrawCard &> unittestresult.out
	gcov dominion.c >> unittestresult.out
	cat dominion.c.gcov >> unittestresult.out
	
randomadventurer:
	make randomtestadventurer
	./randomtestadventurer &> testadventurer.out
	
randomtestcard1:
	make randomtestcard1
	./randomtestcard1 &> randomtests1.out
	
randomtestcard2:
	make randomtestcard2
	./randomtestcard2 &> randomtests2.out
	
randomtestadventurer: randomtestadventurer.c dominion.o rngs.o
	gcc -o randomtestadventurer -g randomtestadventurer.c dominion.o rngs.o $(CFLAGS)
	
randomtestcard1: randomtestcard1.c dominion.o rngs.o
	gcc -o randomtestcard1 -g randomtestcard1.c dominion.o rngs.o $(CFLAGS)

randomtestcard2: randomtestcard2.c dominion.o rngs.o
	gcc -o randomtestcard2 -g randomtestcard2.c dominion.o rngs.o $(CFLAGS)

unittest1:
	gcc -fprofile-arcs -ftest-coverage -Wall -std=c99 dominion.c unittest1.c rngs.c -o unittest1 -lm -g

unittest2:
	gcc -fprofile-arcs -ftest-coverage -Wall -std=c99 dominion.c unittest2.c rngs.c -o unittest2 -lm -g

unittest3:
	gcc -fprofile-arcs -ftest-coverage -Wall -std=c99 dominion.c unittest3.c rngs.c -o unittest3 -lm -g

unittest4:
	gcc -fprofile-arcs -ftest-coverage -Wall -std=c99 dominion.c unittest4.c rngs.c -o unittest4 -lm -g

cardtest1:
	gcc -fprofile-arcs -ftest-coverage -Wall -std=c99 dominion.c cardtest1.c rngs.c -o cardtest1 -lm -g

cardtest2:
	gcc -fprofile-arcs -ftest-coverage -Wall -std=c99 dominion.c cardtest2.c rngs.c -o cardtest2 -lm -g

cardtest3:
	gcc -fprofile-arcs -ftest-coverage -Wall -std=c99 dominion.c cardtest3.c rngs.c -o cardtest3 -lm -g

cardtest4:
	gcc -fprofile-arcs -ftest-coverage -Wall -std=c99 dominion.c cardtest4.c rngs.c -o cardtest4 -lm -g

unitTests:
	gcc -fprofile-arcs -ftest-coverage -Wall -std=c99 dominion.c unittest1.c rngs.c -o unittest1 -lm -g $(CFLAGS)
	gcc -fprofile-arcs -ftest-coverage -Wall -std=c99 dominion.c unittest2.c rngs.c -o unittest2 -lm -g $(CFLAGS)
	gcc -fprofile-arcs -ftest-coverage -Wall -std=c99 dominion.c unittest3.c rngs.c -o unittest3 -lm -g $(CFLAGS)
	gcc -fprofile-arcs -ftest-coverage -Wall -std=c99 dominion.c unittest4.c rngs.c -o unittest4 -lm -g $(CFLAGS)
	gcc -fprofile-arcs -ftest-coverage -Wall -std=c99 dominion.c cardtest1.c rngs.c -o cardtest1 -lm -g $(CFLAGS)
	gcc -fprofile-arcs -ftest-coverage -Wall -std=c99 dominion.c cardtest2.c rngs.c -o cardtest2 -lm -g $(CFLAGS)
	gcc -fprofile-arcs -ftest-coverage -Wall -std=c99 dominion.c cardtest3.c rngs.c -o cardtest3 -lm -g $(CFLAGS)
	gcc -fprofile-arcs -ftest-coverage -Wall -std=c99 dominion.c cardtest4.c rngs.c -o cardtest4 -lm -g $(CFLAGS)

tests:
	echo "RUNNING MYTESTS TO EXECUTE UNIT TESTS" &> unittestresults.out
	echo "Executing unittest1" >> unittestresults.out
	./unittest1 >> unittestresults.out
	
	echo "Executing unittest2" >> unittestresults.out
	./unittest2 >> unittestresults.out
	
	echo "Executing unittest3" >> unittestresults.out
	./unittest3 >> unittestresults.out
	
	echo "Executing unittest4" >> unittestresults.out
	./unittest4 >> unittestresults.out
	
	echo "Executing cardtest1" >> unittestresults.out
	./cardtest1 >> unittestresults.out
	
	echo "Executing cardtest2" >> unittestresults.out
	./cardtest2 >> unittestresults.out
	
	echo "Executing cardtest3" >> unittestresults.out
	./cardtest3 >> unittestresults.out
	
	echo "Executing cardtest4" >> unittestresults.out
	./cardtest4 >> unittestresults.out
	
	gcov -f -b dominion.c >> unittestresults.out
	cat dominion.c.gcov >> unittestresults.out

player: player.c interface.o
	gcc -o player player.c -g  dominion.o rngs.o interface.o $(CFLAGS)

all: playdom player 

clean:
	rm -f *.o playdom.exe playdom player player.exe  *.gcov *.gcda *.gcno *.so *.out testDrawCard testDrawCard.exe
