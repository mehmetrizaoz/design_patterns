vpath %.cc src
vpath %.h include
CC := g++

CPPFLAGS = -I include -std=c++14
objects = main.o fan.o light.o startFanCommand.o stopFanCommand.o \
	turnOnLightCommand.o turnOffLightCommand.o homeAutomationRemote.o

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
