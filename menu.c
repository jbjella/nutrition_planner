/* ----------------------------------------------------------------------------
	Jack Bjelland
	CPSC_1110 Section 001
	November 24, 2019
	PA2 menu.c: This function prints the main menu with the proper formatting.
-----------------------------------------------------------------------------*/

#include"defs.h"

int printMainMenu(){
	printf("\nMAIN MENU\n");
	printf("1. choose lean protein\n");
	printf("2. choose fruit\n");
	printf("3. choose complex carbs (starches & grains)\n");
	printf("4. choose fibrous carbs (veggies & greens)\n");
	printf("5. choose dairy\n");
	printf("6. choose fats, oils, nuts, seeds\n");
	printf("7. show totals\n");
	printf("8. quit program\n");
	printf("\n> > > ");
	return(0);
}
