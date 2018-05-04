default: run

prog:
	gcc -Wall -fprofile-arcs -ftest-coverage -std=c99 testme.c -o prog

run: prog
	./prog
	
.PHONY: all prog

runtests:
	gcov testme.c &> testme.out
	cat testme.c.gcov >> testme.out

clean:
	rm -f prog *.gcda *.out