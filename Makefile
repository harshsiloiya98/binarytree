CC = gcc
CFLAGS = -I.
DEPS = binarytree.h
OBJ = binarytree.o new.o

%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

newmake: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)