OBJS = main.o
CC = g++ -g -Wall -pedantic -std=c++11

all = main

main: $(OBJS)
	$(CC) -Wall -g -o main $(OBJS)

main.o: main.cpp
	$(CC) -Wall -g -c main.cpp

clean:
	rm $(OBJS)