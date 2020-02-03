/* ----------------------------------------------------------------------------
	Jack Bjelland
	CPSC_1110 Section 001
	November 24, 2019
	PA2 makeChoices.c: This function adds the selected food from another arrays
		into the user's selected foods array. It also adds to the total nutrition
		values to be printed later.
-----------------------------------------------------------------------------*/

#include "defs.h"

void chooseFood(int whichOne,food foodArray[],int size,food chosenFoodsArray[],
	int *totalCals,float *totalPro,float *totalCarbs,float *totalFats){

	chosenFoodsArray[size]=foodArray[whichOne-1];

	*totalCals+=foodArray[whichOne-1].calories;
	*totalPro+=foodArray[whichOne-1].protein;
	*totalCarbs+=foodArray[whichOne-1].carbs;
	*totalFats+=foodArray[whichOne-1].fat;
}
