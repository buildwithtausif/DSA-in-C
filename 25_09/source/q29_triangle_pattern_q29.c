// WAP to print following patterns using for-loop: triangle of '*', triangle of digits
#include <stdio.h>
#include <string.h> // Required for strlen()

void t_star();	// pyramid of stars
void t_digits(); // pyramid of digits
int validateInput(int, int *); // check if it's a triangular number

int main() {
	/* 
		(optional): I'll print a rectangle-box inside which i'll ask user to select one of the two opeartions to print star or digit triangle patterns.
	*/
	
	int l = 45, b = 6; // length & breadth of rect
	int i,j; // loop variables
	
	
	// menu item to print inside box
	char menu_item1[] = " 1. Print asterix pyramid pattern";
	char menu_item2[] = " 2. Print digits pyramid pattern";
	
	// a textbox
	for (i = 1; i <= b; i++) {
		//	check for border positions
			if (i == 1 || i == b){
				for (j = 1; j <= l; j++) {
					printf("*");
				}
				printf("\n");
			} else if (i == 2) {
				printf("* By Tausif Alam, BCAE01525");
				for (j = 0; j < l - 28; j++) {
					printf(" ");
				}
				printf("*\n");
			} else if (i == 3){
				printf("*%s", menu_item1);
				// print spaces to fill the remaining width
				for (j = 0; j < l - strlen(menu_item1) - 2; j++) {
					printf(" ");
				}
				printf("*\n");
			} else if (i == 4) {
				printf("*%s", menu_item2);
				// print spaces to fill the remaining width
				for (j = 0; j < l - strlen(menu_item2) - 2; j++) {
					printf(" ");
				}
				printf("*\n");
			} else {
				printf("*"); // print left border
				for (j = 1; j <= l - 2; j++) {
					printf(" ");
				}
				printf("*\n");
			}
	}
	
	// get user input
	int opt;
	printf("Select Option: ");
	scanf("%d", &opt);
	
	// call appropriate function for pattern printing
	if (opt == 1) {
		t_star();
	}
	if (opt == 2) {
		t_digits();
	}
	return 0;
}
void t_star() {
	/*
	Observations:
				for a pyramid pattern in upward and downward directions for col and row respectively, 
				col(n) = col(n-1) + 1
				row(n) = row(n-1) + 1
			
				minimum of 3 elements required	
				no. of elements min (3) => 3,6,10,15,21... (triangular number)
						the difference is an A.P. with d = 1 => 3,4,5,6...
						the second difference is 1,1,1,1,....
						
						It's a Quadratic Sequence!
						****formula for number of stars is = sum of n natural numbers i.e. n(n+1)/2***
					
						i.e. a(n) = 3 + n - 1 where, n is entered value
						this implies that anyinput a user gives has to go through this check in order to get a possible pyramid structure ig.
						
						also what we can do is if the user_input fails to comply with the above algo, we can simply increment or decrement it to the nearest possible value
						for pyramid formation.
	*/
	int up_input = 3; // min 3 if invalid fallback to 3 , [up = user or possible]
	printf("Please enter number of stars you want: ");
	scanf("%d", &up_input);
	if (up_input < 3) {
		printf("It's not making sense! invalid!");
	} else {
		int height = 0;
		int valid_stars = validateInput(up_input, &height); // check if it's a triangular number
		// create the pyramid, first need to convert number of starts to triangle height,
		// solve s = n(n+1)/2 in reverse order => n = (sqrt(8s+1) - 1 ) / 2 this gives number of rows or the height or use pointer
		
//		int row = (sqrt(8*s+1) - 1) / 2;
		int i,j,space;
		for (i = 1; i <= height; i++) {
			for (space = 1; space <= height - i; space++) {
				printf(" ");
			}
			// for symmetric pyramid like structure, 2n-1 is the expression
			for (j = 1; j <= 2*i-1; j++) {
				printf("*");
			}
			printf("\n");
		}
	}
}
void t_digits() {
    int height, row, col, space;
    printf("\nHow many rows?: ");
    scanf("%d", &height);
		for (row = 1; row <= height; row++) {
        for (space = 1; space <= height - row; space++) {
            printf(" ");
        }
		// for symmetric pyramid like structure, 2n-1 is the expression
        for (col = 1; col <= 2*row-1; col++) {
            printf("%d", col % 10); // avoid printing digits greater than 2 to maintain symmetry
        }
        printf("\n");
	}
}
int validateInput(int input, int *height_n) {
	// check if it's a triangular number
	int n = 1; // counter
	while (n*(n+1) / 2 < input) {
		n++;
	}
	
	int current_triangular_num = n*(n+1)/2;
	*height_n = n; // send back the height of the pyramid
	
	// check why the loop stopped to get a triangular number
	if (current_triangular_num == input) {
		printf("Valid triangular number! here is a pyramid with %d elements\n\n", input);
		return input;
	} else {
		printf("Value didn't matched to triangular number set!, \nusing the next possible triangular number to make the pyramid (%d) \n\n", current_triangular_num);
		return n; // return the nearest triangular number so that we can make the pyramid
	}
}