playGame: Player.o Game.o
	g++ Player.o Game.o -o playGame

Game.o: Game.cpp
	g++ -c Game.cpp

Player.o: Player.cpp
	g++ -c Player.cpp

clean:
	rm -f *.o
	rm -f playGame

run:
	./playGame
