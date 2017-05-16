#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	unsigned int n = 0;
	unsigned int loopcnt = 3;
	
	printf("enter a  number between 1 and 100, inclusive: ");
	scanf("%d", &n);
	while (n < 1 || n > 100) {
		printf("%d is outside the accepted range\n", n);
		printf("enter a number between 1 and 100, inclusive: ");
		scanf("%d", &n);
		if (!loopcnt)
			return 1;
		else
			loopcnt--;
	}

	if (n % 2 != 0)
		printf("Weird.\n");
	else if (n % 2 == 0 && n >=2 && n <=5)
		printf("Not Weird.\n");
	else if (n % 2 == 0 && n >= 6 && n <= 20)
		printf("Weird.\n");
	else if (n % 2 == 0 && n > 20)
		printf("Not Weird.\n");
	return 0;
}