INCLUDE_PATH= ./src
BIN_PATH= ./bin 

all: app


bin_folder : 
	mkdir bin



%.o : %.cpp %.hpp
	g++ -Wall -g -c $< -o $@ -I $(INCLUDE_PATH)

app : ./src/image/gif.o ./src/image/image.o ./src/image/jpg.o ./src/factory/factory.o ./src/reader/gif_reader.o ./src/reader/jpg_reader.o
	g++ $^ ./src/main.cpp -o $@ -I $(INCLUDE_PATH)

clean:
	rm ./src/factory/*.o
	rm ./src/reader/*.o
	rm ./src/image/*.o
	rm app
