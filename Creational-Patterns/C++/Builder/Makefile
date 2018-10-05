INCLUDE_PATH= ./src
BIN_PATH= ./bin 

all: app


bin_folder : 
	mkdir bin



%.o : %.cpp %.hpp
	g++ -Wall -g -c $< -o $@ -I $(INCLUDE_PATH)

app : ./src/hardware/memory.o ./src/hardware/harddisk.o ./src/hardware/processor.o ./src/builder/director.o ./src/builder/embedded_sytem_builder.o ./src/builder/workstation_system_builder.o ./src/os/operational_system.o
	g++ $^ ./src/main.cpp -o $@ -I $(INCLUDE_PATH)

clean:
	rm ./src/hardware/*.o
	rm ./src/builder/*.o
	rm ./src/os/*.o
	rm app
