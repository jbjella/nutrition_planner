/* ----------------------------------------------------------------------------
	Jack Bjelland
	CPSC_1110 Section 001
	November 24, 2019
	PA2 arrayProcessing.c: This file contains the function printArray and
		initializeArray. printArray prints the contents of the input food array
		with the correct formatting. initializeArray reads the data from a file
		input and assigns the data from the file to the proper variable in the food
		array.
-----------------------------------------------------------------------------*/

#include "defs.h"

void printArray(int arraySize, food foodType[]){

	int i=0;

	printf("\n%-30s %20s %6s  %5s  %5s  %4s\n","FOOD ITEM","QUANTITY","CALS",
	"PRO","CARBS","FAT");

	for(i=0;i<arraySize;i++){
		printf("%2d. %-26s %20s %6d  %5.2f  %5.2f  %4.2f\n",i+1,foodType[i].item,
		foodType[i].quantity,foodType[i].calories,
		foodType[i].protein,foodType[i].carbs,
		foodType[i].fat);
	}
	printf("\n> > > ");
}

void initializeArray(FILE *datafile, int arraySize, food foodType[]){
	int i;
	for(i=0;i<arraySize;i++){
		fscanf(datafile,"%*c%[^\n] %[^\n] %d %f %f %f",foodType[i].item,
		foodType[i].quantity,&foodType[i].calories,&foodType[i].protein,
		&foodType[i].carbs,&foodType[i].fat);
	}
}
