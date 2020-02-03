/* ----------------------------------------------------------------------------
	Jack Bjelland
	CPSC_1110 Section 001
	November 24, 2019
	PA2 results.c: This file contains the function printTotals. This function
		prints each item in the user's personal food array with the totals for
		each numeric value below.
-----------------------------------------------------------------------------*/

#include"defs.h"

void printTotals(food chosenFoodsArray[], int cals, float pro, float carbs,
	float fat){
	int i=0;

	printf("\n%-30s %20s %6s  %5s  %5s  %4s\n","FOOD ITEM","QUANTITY","CALS",
	"PRO","CARBS","FAT");

	for(i=0;i<foodCount;i++){
		printf("%2d. %-26s %20s %6d  %5.2f  %5.2f  %4.2f\n",i+1,
		chosenFoodsArray[i].item,chosenFoodsArray[i].quantity,
		chosenFoodsArray[i].calories,chosenFoodsArray[i].protein,
		chosenFoodsArray[i].carbs,chosenFoodsArray[i].fat);
	}

	printf("\ntotal calories: %d\n",cals);
	printf("total protein: %.2f\n",pro);
	printf("total carbs: %.2f\n",carbs);
	printf("total fat: %.2f\n\n",fat);

}
