OBJS = deMain.o bubbleSort.o
CC = g++ -g -Wall -pedantic -std=c++11
DEPS = bubbleSort.h

all: deMain

bubbleSort: $(OBJS)
	$(CC) -Wall -g -o bubbleSort $(OBJS)

bubbleSort.o: bubbleSort.cpp
	$(CC) -Wall -g -c bubbleSort.cpp
	
deMain: $(OBJS)
	$(CC) -Wall -g -o deMain $(OBJS)

deMain.o: deMain.cpp $(DEPS)
	$(CC) -Wall -g -c deMain.cpp

clean:
	rm $(OBJS)