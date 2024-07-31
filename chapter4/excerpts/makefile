EXEC = chap4.exe

CC = gcc

OPT = -O0
# CFLAGS = -std=c99 -g -Wall -I/u2/cs136l/pub/common -MMD ${OPT}
CFLAGS = -std=c99 -g -Wall -MMD ${OPT}

#LIB = /u2/cs136l/pub/common/*.o

SRC = $(wildcard *.c)

OBJECTS = $(SRC:.c=.o)
DEPENDS = $(OBJECTS:.o=.d)

${EXEC}: ${OBJECTS}
	${CC} ${CFLAGS} ${OBJECTS} -o ${EXEC}

# copy the generated .d files which provides dependencies for each .c file
-include ${DEPENDS}

.PHONY: clean

clean:
	rm *.o *.d ${EXEC}