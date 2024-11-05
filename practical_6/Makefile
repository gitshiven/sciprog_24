CC = gcc
CFLAGS = -Wall
TARGET = matrix_program

all: $(TARGET)

$(TARGET): matmult.o matrix.o
	$(CC) $(CFLAGS) -o $(TARGET) matmult.o matrix.o

matmult.o: matmult.c matmult.h
	$(CC) $(CFLAGS) -c matmult.c

matrix.o: matrix.c matmult.h
	$(CC) $(CFLAGS) -c matrix.c

clean:
	rm -f *.o $(TARGET)

