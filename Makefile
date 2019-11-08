PROGRAM = main
CC = gcc
CFLAGS = -Wall
LDFLAGS = -lGL -lGLU -lglut

$(PROGRAM):
	$(CC) $(CFLAGS) -o $(PROGRAM) $(PROGRAM).c  $(LDFLAGS)

.PHONY: clean dist

clean:
	-rm $(PROGRAM)
