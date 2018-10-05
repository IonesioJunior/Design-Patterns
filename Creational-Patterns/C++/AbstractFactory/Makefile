INCLUDE_PATH= ./src
BIN_PATH= ./bin 

all: app


bin_folder : 
	mkdir bin



%.o : %.cpp %.hpp
	g++ -Wall -g -c $< -o $@ -I $(INCLUDE_PATH)

app : ./src/abs_factory/factory-selector.o ./src/client/client.o ./src/widget/linux-button.o ./src/abs_factory/linux-factory.o ./src/widget/linux-menu.o ./src/widget/windows-button.o ./src/abs_factory/windows-factory.o ./src/widget/windows-menu.o
	g++ $^ ./src/main.cpp -o $@ -I $(INCLUDE_PATH)

clean:
	rm ./src/abs_factory/*.o
	rm ./src/widget/*.o
	rm ./src/client/*.o
	rm app
