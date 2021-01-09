
all: assignment2Fserver assignment2Fclient

assignment2Fserver: assignment2Fserver.c sol2f.h
	gcc -o assignment2Fserver.out assignment2Fserver.c -lrt
	
assignment2Fclient: assignment2Fclient.c sol2f.h
	gcc -o assignment2Fclient.out assignment2Fclient.c -lrt
	
runassignment2Fclient:
	./assignment2Fclient.out

runassignment2Fserver:
	./assignment2Fserver.out

clean:
	rm -rf *.out *.o
