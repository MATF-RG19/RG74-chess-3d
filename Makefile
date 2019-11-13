PROGRAM = main
CC = g++
CFLAGS = -Wall
LDFLAGS = -lGL -lGLU -lglut

$(PROGRAM):
	$(CC) $(CFLAGS) -o $(PROGRAM) $(PROGRAM).cpp  $(LDFLAGS)

.PHONY: clean dist

clean:
	-rm $(PROGRAM)
