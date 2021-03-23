vpath %.cc src
vpath %.h include
CC := g++

CPPFLAGS = -I include
objects = AbstractEmployee.o Director.o Employer.o Manager.o main.o

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
