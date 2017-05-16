
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main() {
	int i = 4;
	double d = 4.0;
	char s[] = "HackerRank ";

	// Declare second integer, double, and String variables.
	int i2 = 12;
	double d2 = 4.1;
	//char s2[80] = { 0 };
	char s2[] = "is the best place to learn and practice coding!";

	// Read and save an integer, double, and String to your variables.
	//scanf("%d", &i2);
	//scanf("%g", &d2);

	//printf("Enter a string: ");
	//gets(s2);
	//scanf("%s[^\n]", s2);
	
	// Print the sum of both integer variables on a new line.
	printf("%d\n", i + i2);

	// Print the sum of the double variables on a new line.
	d2 = d + d2;
	printf("%.5g\n", d2);
	
	// Concatenate and print the String variables on a new line
	printf("%s", s); 	
	printf("%s\n", s2);

	// The 's' variable above should be printed first.
	return 0;

}