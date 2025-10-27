//to find electricity charges based on consumption
/* 
	[UNITS]			[CHARGES]
	0 - 200 		Rs. 0.50 per unit
	201 - 400 		Rs. 100 plus Rs. 0.65 per unit excess of 200
	401 - 600 		Rs. 230 plus Rs. 0.80 per unit excess of 400
	601 and above 	Rs. 390 plus Rs. 1.00 per unit excess of 600
*/
#include <stdio.h>
int main() {
	float consump = 0.00; // initial consumed units
	float charges = 0.00; // to be calculated later
	printf("By Tausif Alam, BCA-1EA\n\n");
	printf("Please enter consumed units: ");
	scanf("%f", &consump);
	
	if (consump <= 200) {
		charges = consump * 0.50;
		printf("Your electricity bill for given period is: %.2f @0.50 per unit for %0.2f units consumed", charges, consump);
	} else if (consump >= 201 && consump <= 400) {
		charges = consump * 0.65 + 100;
		printf("Your electricity bill for given period is: %.2f @0.65 per unit + Rs. 100 fixed charge for %0.2f units consumed", charges, consump);
	} else if (consump >= 401 && consump <= 600) {
		charges = consump * 0.80 + 230;
		printf("Your electricity bill for given period is: %.2f @0.80 per unit + Rs. 230 fixed charge for %0.2f units consumed", charges, consump);
	}
	else {
		charges = consump * 1.00 + 390;
		printf("Your electricity bill for given period is: %.2f @1.00 per unit + Rs. 390 fixed charge for %0.2f units consumed", charges, consump);
	}
	
	return 0;
}
