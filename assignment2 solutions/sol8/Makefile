
all: assignment2Hwrite assignment2Hread

assignment2Hwrite: assignment2Hwrite.c sol2h.h
	gcc -o assignment2Hwrite.out assignment2Hwrite.c -lpthread -lrt
	
assignment2Hread: assignment2Hread.c sol2h.h
	gcc -o assignment2Hread.out assignment2Hread.c -lpthread -lrt
	
runassignment2Hread:
	./assignment2Hread.out

runassignment2Hwrite:
	./assignment2Hwrite.out

clean:
	rm -rf *.out *.o
