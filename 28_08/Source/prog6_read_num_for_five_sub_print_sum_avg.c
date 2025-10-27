//Prog6: read numbers for five subjects and print their sum and average
#include <stdio.h>

int main()  {
	printf("By Tausif Alam, BCA-1EA\n\n");
	int a,b,c,d,e; // [a,b,c,d,e]=> represents five subject marks each
	a = b = c = d = e = 0; //initial value of all five being ZERO
	printf("Please enter your marks in 5 subjects consequtively: ");
	// take user input
	scanf("%d %d %d %d %d", &a,&b,&c,&d,&e);
	// sum of marks
	int sum=0;
	printf("Marks Obtained: %d\n", (sum=a+b+c+d+e), sum);
	//average of marks
	float avg=0.0;
	printf("Average Marks Obtained: %0.2f", (avg=(float)sum/5), avg);
}
