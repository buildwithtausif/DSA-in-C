// WAP to print natural numbers till n using while loop. Also print reverse counting from m to 1. Get m,n from user at runtime.
#include <stdio.h>

int main() {
	int n,m; // m is decending specifier, n is ascending specifier
	printf("Please enter values of (n,m)\n n is forward counting,  m is backward counting: ");
	scanf("%d %d", &n, &m);
	
	int i = 1; // loop1 var
	while (i <= n) {
		printf("%d", i);
		i++;
	}
	printf("\n");
	int j = m; // loop2 var
	while (j >= 1) {
		printf("%d", j);
		j--;
	}
	return 0;
}
