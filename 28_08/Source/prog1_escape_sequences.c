#include <stdio.h>

/* 
	in this we are going to demonstarte below given escape sequences
	=> (\n, \t, \b, \\, \", \');
	
	for instance,
	1. New Line sequence
	2. Tab sequence
	3. Backspace sequence
	4. to print \ itself
	5. to print " double quotation
	6. to print ' single quotation
*/

void main() {
	printf("By Tausif Alam, BCA-1EA\n\n");
	// new line
	printf("add new line after this \nthis text is in new line\n\n");  // got error in first run coz i used 'single_char_const' syntax instead of string syntax
	printf("add tab space after this \t\tthis tabbed text\n\n"); // worked in first go
	printf("remove \'an\' of banana from right to left: banan\ba\b  \n\n"); //worked in 3rd go, few placement issues
	printf("printed: \\ \n\n"); // worked in first go
	printf("printed: \" \n\n"); //worked in first go
	printf("printed: \' \n\n"); //worked in first go
}
