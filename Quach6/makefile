# Johnny Quach
# CSIS 252
# Quach4

EXE =prog6

CC = g++

OBJECTS = main.o 

LFLAGS =
CFLAGS =  

$(EXE):		$(OBJECTS)
		$(CC) $(CFLAGS) -o $(EXE) $(OBJECTS) $(LFLAGS)

main.o:		main.cpp stackType.h
		$(CC) $(CFLAGS) -c main.cpp

stackType.o:	stackType.h
		$(CC) $(CFLAGS) -c stackType.h
clean:		
		rm -rf $(EXE) $(OBJECTS) *-
