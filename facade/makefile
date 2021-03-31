vpath %.cc src
vpath %.h include
CC := g++

CPPFLAGS = -I include
objects := main.o Amplifier.o Tuner.o DvdPlayer.o Projector.o CdPlayer.o \
   TheaterLights.o Screen.o PopcornPopper.o HomeTheaterFacade.o

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
