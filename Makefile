a.out: main.o Game.o
	g++ main.o Game.o -lncurses

main.o: main.cc Game.h
	g++ main.cc -c

Game.o: Game.cc Game.h
	g++ Game.cc -c

clean:
	rm *.o a.out


