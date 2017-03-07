Game: Player.o Game.o
	g++ Player.o Game.o -o Game

Game.o: Game.cpp
	g++ -c Game.cpp

Player.o: Player.cpp
	g++ -c Player.cpp

clean:
	rm *.o
	rm Game

run: 
	./Game
