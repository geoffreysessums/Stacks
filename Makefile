# Makefile for programs
#******************************************************************************

PROGRAMS = stackArray

#******************************************************************************
# Parameters to control Makefile operation

CC = gcc
CFLAGS =

#******************************************************************************
# Entry to bring the package up to date

all: $(PROGRAMS)

#******************************************************************************
# Standard entries to remove files from the directories
# 	tidy -- eliminate unwanted files
#	scratch -- delete derived files in preparation for rebuild

tidy:
	rm -f ,* .,* *~ core a.out graphics.ps
		
scratch:
	rm -f *.o *.a $(PROGRAMS)

#******************************************************************************
# C compilations

stackArray.o: stackArray.c
	$(CC) $(CFLAGS) -c stackArray.c
	
#******************************************************************************
# Executable programs

stackArray: stackArray.o
	$(CC) $(CFLAGS) -o stackArray stackArray.o
