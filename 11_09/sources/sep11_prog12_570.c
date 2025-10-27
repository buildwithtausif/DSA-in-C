 /* WAP for time conversion:-
 	- hours to seconds
 	- hours to minutes
 	- minutes to seconds

 	here, I'm assuming that the input time format is in hours only
*/
#include <stdio.h>

int main() {
	float h,m,s; // hour, minutes, seconds
	// take input from user (hours)
	printf("By Tausif Alam, BCA-1EA\n\n");
	printf("convert to seconds, minutes \n\n");
	//	- hours to seconds
	printf("Entre number of hours: ");
	scanf("%f", &h);
	printf("%.2f hours in seconds becomes: %.2f seconds\n", h, h*60*60);
	// - hours to minutes 
	printf("Entre number of hours: ");
	scanf("%f", &h);
	printf("%.2f hours in seconds becomes: %.2f minutes\n", h,h*60);
	// - minutes to seconds
	printf("Entre number of minutes: ");
	scanf("%f", &m);
	printf("%.2f minutes in seconds becomes: %.2f seconds\n", m,m*60);
	
	return 0;
	
}