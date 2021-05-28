vpath %.cc src
vpath %.h include
CC := g++

CPPFLAGS = -I include
objects = VlcPlayer.o Mp4Player.o MediaAdapter.o AudioPlayer.o main.o

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
