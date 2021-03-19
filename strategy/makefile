vpath %.cc src
vpath %.h include
CC := g++

CPPFLAGS = -I include
objects = PlayerStrategy.o Attacker.o Defender.o Player.o FootballPlayer.o main.o

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
