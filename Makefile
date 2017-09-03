# Replace "new" with the name of your respective c++ program file
# Make sure to place this file in whichever directory your c++ main and binarytree files are present

CC = gcc
CFLAGS = -I.
DEPS = binarytree.h
OBJ = binarytree.o new.o

%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

newmake: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
