// WAP to read two integers and an operator (+,-,*,/,%) and get result of operator on two integers
#include <stdio.h>
int main() {
	int oprnd1 = 0; // to be taken from user
	int oprnd2 = 0; // to be taken from user
	char oprtr = '+'; // to be taken from user
	printf("By Tausif Alam, BCA-1EA\n\n");
	printf("Please type one operator and two numbers respectively: ");
	scanf("%c %d %d", &oprtr, &oprnd1, &oprnd2);
	
	switch (oprtr) {
		case '+': printf("%d + %d = %d", oprnd1,oprnd2,oprnd1+oprnd2);
				  break;
		case '-': printf("%d - %d = %d", oprnd1,oprnd2,oprnd1-oprnd2);
				  break;
		case '*': printf("%d * %d = %d", oprnd1,oprnd2,oprnd1*oprnd2);
				  break;
		case '/': printf("%d / %d = %d", oprnd1,oprnd2,oprnd1/oprnd2);
				  break;
		case '%': printf("%d % %d = %d", oprnd1,oprnd2,oprnd1%oprnd2);
				  break;
		default: printf("Invalid operation!");				  
	}
	
	return 0;
}
