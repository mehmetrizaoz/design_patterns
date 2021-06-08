vpath %.cc src
vpath %.h include
CC := g++

CPPFLAGS = -I include
objects := RealCustomer.o NullCustomer.o CustomerFactory.o main.o

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
