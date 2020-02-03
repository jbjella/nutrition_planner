/* ----------------------------------------------------------------------------
	Jack Bjelland
	CPSC_1110 Section 001
	November 24, 2019
	PA2 defs.h: This file contains the definitions for the structures used
		throughout the program. This file was included with the assignment, so any
		changes were made to increase readability.
-----------------------------------------------------------------------------*/

#ifndef DEFS_H
#define DEFS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char item[30];
   char quantity[20];
   int calories;
   float protein;
   float carbs;
   float fat;
} food;

typedef struct {
	char month[4];
	int day, year;
} date;

// counter variable to keep track of the number of foods that are chosen
int foodCount;

/* -----------------------------   prototypes   ----------------------------- */
// use the file pointer dataFile to read in the data for the foodType[] array
//	use a loop that goes arraySize times so that all the food items are read in

// arrayProcessing.c
void initializeArray(FILE *dataFile, int arraySize, food foodType[]);

// used for the food arrays as well as the chosen chosenFoodsArray
// arrayProcessing.c
void printArray(int arraySize, food foodType[]);

// menu.c
int printMainMenu();

// print the meal's food items and nutrition totals
// results.c
void printTotals(food chosenFoodsArray[],
  					  int cals, float pro, float carbs, float fat);

// whichOne represents menu choice (lean protein, fruit, etc.)
 // makeChoices.c
void chooseFood(int whichOne, food foodArray[], int size,
					 food chosenFoodsArray[], int *totalCals, float *totalPro,
					 float *totalCarbs, float *totalFat);


#endif
