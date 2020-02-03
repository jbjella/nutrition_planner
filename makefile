#-----------------------------------------------------------------------------
#	Jack Bjelland
#	CPSC_1110 Section 001
#	November 24, 2019
#	PA2 makefile: The makefile includes a make command for compiling, running,
#		and clearing the executable file. 
#-----------------------------------------------------------------------------

pa2: defs.h menu.c mainDriver.c arrayProcessing.c makeChoices.c results.c
	-gcc -Wall -o pa2 defs.h menu.c mainDriver.c arrayProcessing.c \
		makeChoices.c results.c

run: pa2
	./pa2

clean:
	-rm ./PA2
