CC = gcc
CFLAGS = -Wall -Wextra -std=c11
TARGET = shapeCalc

all:
	$(CC) $(CFLAGS) shapeCalc.c -o $(TARGET) -lm

clean:
	rm -f $(TARGET)
