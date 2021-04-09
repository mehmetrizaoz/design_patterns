vpath %.cc src
vpath %.h include
CC := g++

CPPFLAGS = -I include
objects := Student.o StudentView.o StudentController.o main.o

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
