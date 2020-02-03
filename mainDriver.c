/* ----------------------------------------------------------------------------
	Jack Bjelland
	CPSC_1110 Section 001
	November 24, 2019
	PA2 mainDriver.c: This file contains the main functionality of the program.
		it initializes each file into an array, and calls the menu functions to
		allow the user to interact with those arrays and save desired items to a
		personal totals array which shows each entry as well as their their totals
		for each numeric value.
-----------------------------------------------------------------------------*/

#include"defs.h"

int main(int argc,char *argv[]){
	food totalsArray[60];
	int calorieTotal;
	int *caloriePtr=&calorieTotal;

	float proteinTotal,carbTotal,fatTotal;
	float *proteinPtr=&proteinTotal;
	float *carbPtr=&carbTotal;
	float *fatPtr=&fatTotal;

	int choice=1;
	int item;

	date currentDate;
	if(argc>1){
		strcpy(currentDate.month,argv[1]);
		currentDate.day=atoi(argv[2]);
		currentDate.year=atoi(argv[3]);
	}

//Sizes for each file
	int proteinSize,fruitSize,complexSize,fibrousSize,dairySize,fatsSize;

//Opening food files
	FILE *leanproteinPtr=fopen("leanProteins.txt","r");
	FILE *fruitPtr=fopen("fruit.txt","r");
	FILE *complexCarbsPtr=fopen("complexCarbs.txt","r");
	FILE *fibrousCarbsPtr=fopen("fibrousCarbs.txt","r");
	FILE *dairyPtr=fopen("dairy.txt","r");
	FILE *fatsPtr=fopen("fats.txt","r");

//Finding length of array from each file
	fscanf(leanproteinPtr,"%d",&proteinSize);
	fscanf(fruitPtr,"%d",&fruitSize);
	fscanf(complexCarbsPtr,"%d",&complexSize);
	fscanf(fibrousCarbsPtr,"%d",&fibrousSize);
	fscanf(dairyPtr,"%d",&dairySize);
	fscanf(fatsPtr,"%d",&fatsSize);

//Declaring each food array using sizes
	food proteins[proteinSize],fruit[fruitSize],complexcarbs[complexSize],
	fibrouscarbs[fibrousSize],dairy[dairySize],fats[fatsSize];

//Declaring an array of sizes
	int sizeArray[]={proteinSize,fruitSize,complexSize,fibrousSize,dairySize,
		fatsSize};

//Initalizing each food array using pointers generated earlier
	initializeArray(leanproteinPtr,proteinSize,proteins);
	initializeArray(fruitPtr,fruitSize,fruit);
	initializeArray(complexCarbsPtr,complexSize,complexcarbs);
	initializeArray(fibrousCarbsPtr,fibrousSize,fibrouscarbs);
	initializeArray(dairyPtr,dairySize,dairy);
	initializeArray(fatsPtr,fatsSize,fats);

//Declaring an array of food arrays
	food *menuChoices[]={proteins,fruit,complexcarbs,fibrouscarbs,dairy,
		fats,totalsArray};

/*While loop which keeps the program running as long as the user doesn't select
	8, which then closes the menu */
	while(choice!=8){
		printMainMenu();
		scanf("%i",&choice);
		//If the user chooses any of the food arrays, it prints the proper array
		if(choice<7){
   		printArray(sizeArray[choice-1],menuChoices[choice-1]);
			scanf("%d",&item);
			chooseFood(item,menuChoices[choice-1],foodCount,totalsArray,caloriePtr,
				proteinPtr,carbPtr,fatPtr);
			foodCount+=1;
		}
		//If the user chooses the totals array, it prints the proper totals
		if(choice==7){
			//Prints the date if a date is input, otherwise nothing is printed.
			if(argc>1){
				printf("%s %d %d:\n",currentDate.month,currentDate.day,
				currentDate.year);
			}
			printTotals(totalsArray,calorieTotal,proteinTotal,carbTotal,fatTotal);
		}
	}
	return(0);
}
