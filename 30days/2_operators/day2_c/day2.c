#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

float calculateTotal(float meal, int tip, int tax);

int main() {

	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	//char buf[sizeof(SIZE_MAX)] = {0};
	float mealCost = 0.0;
	int tipPercent = 0;
	int taxPercent = 0;
	int totalCost = 0;
	
	/* get values */
	printf("enter meal cost: ");
	scanf_s("%f", &mealCost);
	
	printf("enter tip percent: ");
	scanf_s("%d", &tipPercent);
	
	printf("enter tax percent: ");
	scanf_s("%d", &taxPercent);

	/* pass values to calculateTotal */
	totalCost =  calculateTotal(mealCost, tipPercent, taxPercent);
	
	/* print to stdout */
	printf("The total meal cost is %d dollars.\n",  totalCost );

	return 0;
}

float calculateTotal(float base, int y, int z)
{
	float tip = (float) y / 100 * base;
	float tax = (float) z / 100 * tip;
	float res = base + tip + tax;
	return  ceil(res);  // floats are handled by ceil as doubles, I guess?

}
