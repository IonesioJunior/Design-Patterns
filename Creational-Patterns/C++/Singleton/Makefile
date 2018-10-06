
INCLUDE = -I./src

all: app

./bin/singleton.o: ./src/singleton.cpp ./src/singleton.hpp
	g++ -c ./src/singleton.cpp -o ./bin/singleton.o

app: ./bin/singleton.o
	g++ ./bin/singleton.o ./src/main.cpp -o app $(INCLUDE) -std=c++11



clean:
	rm ./bin/singleton.o 
	rm app
