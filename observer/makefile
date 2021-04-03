vpath %.cc src
vpath %.h include
CC := g++

CPPFLAGS = -I include -std=c++14
objects = Observer.o  CurrentConditionsDisplay.o StatisticsDisplay.o main.o \
   Subject.o ForecastDisplay.o HeatIndexDisplay.o DisplayElement.o WeatherData.o 

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
