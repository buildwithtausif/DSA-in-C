// WAP to read temperature in Celsius and convert it to Fahrenheit and vice-versa.
// formula, c = (f+32)*5/9 and (9/5)*c+32 it returns a gives floating data
#include <stdio.h>
#include <stdlib.h> // for system control, dated 16-09-2025
/* dated: 16-09-2025, fixed return-type error after learning in class about function prototypes */
void take_input(); // take user input 
void fc_conv(); // fahrenheit to celsius
void cf_conv(); // celsius to fahrenheit

int main() {
	printf("By Tausif Alam, BCA-1EA\n\n");
	char re_run = 'y';
	while (re_run == 'y' || re_run == 'Y') {
		system("cls");
		take_input();
		printf("\n\npress y to re-run the program: ");
		scanf(" %c", &re_run);	
	}
	printf("Program Ended, Peace out :)");	
	return 0;
}
void take_input() {
	printf("\n Choose Conversion Type: \n 1. Fahrenheit to Celsius \n 2. Celsius to Fahrenheit \n Your Choice: ");
	int choice = 0;
	scanf("%d", &choice);
	
	switch (choice) {
		case 1: fc_conv();
			    break;
		case 2: cf_conv();
				break;
		default: printf("invalid input");
	}
}
void fc_conv() {
	printf("Enter Fahrenheit Value: ");
	float value = 0;
	scanf("%f", &value);
	float converted_val = 0;
	converted_val = (value-32)*0.555555555555556; // replaced 5/9 to it's solved value , reducing operations performed for single task
	printf("Celcius value for %.2fF is: %.2f", value, converted_val);
}
void cf_conv() {
	printf("Enter Celsius Value: ");
	float value = 0;
	scanf("%f", &value);
	float converted_val = 0;
	converted_val = (value*1.8)+32; // replaced 9/5 to it's solved value , reducing operations performed for single task
	printf("Fahrenheit value for %.2fC is: %.2f", value, converted_val);
}
