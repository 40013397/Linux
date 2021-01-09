
all: assignment2Dsender assignment2Dreceiver

assignment2Dsender: assignment2Dsender.c sol2d.h
	gcc -o assignment2Dsender.out assignment2Dsender.c -lrt
	
assignment2Dreceiver: assignment2Dreceiver.c sol2d.h
	gcc -o assignment2Dreceiver.out assignment2Dreceiver.c -lrt
	
runassignment2Dreceiver:
	./assignment2Dreceiver.out

runaassignment2Dsender:
	./assignment2Dsender.out

clean:
	rm -rf *.out *.o
