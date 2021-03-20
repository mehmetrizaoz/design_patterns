vpath %.cc src
vpath %.h include
CC := g++

CPPFLAGS = -I include
objects := State.o SoldState.o SoldOutState.o NoQuarterState.o HasQuarterState.o GumballMachine.o main.o

all: exec

exec: $(objects)
	$(CC) $^ -o $@

%.o: %.c
	$(CC) $(CPPFLAGS) -c $<

.PHONY: clean help
clean:
	rm exec $(objects)

help:
	@echo "make"
	@echo "make clean"
