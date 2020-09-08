CC = gcc
CFLAGE = -Og -std=gnu99 -Wall
LIB = -lapue
ALL = void_test cp_test
all: $(ALL)

void_test.o:
	$(CC) $(CFLAGE) -c void_test.c $(LIB)

cp_test.o:
	$(CC) $(CFLAGE) -c cp_test.c $(LIB)

clean: 
	rm -f *.o $(ALL)
