CC = gcc
CFLAGS = -Wall -Iinclude

SRC = src/core.c src/operations.c src/utils.c src/tensor.c
OBJ = $(SRC:.c=.o)
LIBRARY = libTensorC.a

$(LIBRARY): $(OBJ)
	ar rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(LIBRARY)
