INCLUDE = ./include
COMPILER = g++
SRC = ./src
APP = ./app
OBJ = ./obj
BIN = ./bin

all: clean run

run: compile
	$(APP)/main.out

compile:
	$(COMPILER)  -Wall -c $(SRC)/log.cpp  -I $(INCLUDE) -o $(OBJ)/log.o 
	$(COMPILER) -Wall $(SRC)/main.cpp -I $(INCLUDE) -o $(APP)/main.out $(OBJ)/log.o

clean:
	rm $(OBJ)/*
	rm $(BIN)/*
	rm $(APP)/*