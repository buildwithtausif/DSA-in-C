#include <stdio.h>

// Prog4: study auto and global variable

int a = 661112; //Global variable
//readNsum(); //user-defined function

int main() {
	printf("By Tausif Alam, BCA-1EA\n\n");
	printf("Prog1: study auto and global variable");
	
	int b; //Local Variable
	printf("Junk val(b)=  %d\n", b);
	b=112;
	printf("new value of var(b) = %d\n", b);
	printf("Global variable(a) val= %d\n", a);
	//	new scope
	{
		int a = 5;
		printf("confined scope of var(a) inside mainFXN, {} => val = %d\n", a);
	}
//	readNsum();
}

////Prog2: read two integers from user and print  both the numbers . Find their sum and assign it to third variable
//int readNsum() {
//	float x,y;
//	x=0.0;
//	y=0.0;
//	printf("type two numbers: ");
//	scanf("%f %f", &x, &y);
//	float sum=0.0;
//	sum=x+y;
//	printf("sum of x and y=  %50.3f", sum);
//}

