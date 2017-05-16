#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	unsigned int t;
	printf("Enter an integer between 1 and 10: ");
	scanf("%d", &t);
	printf(
		"Type strings below.\nEven lines display even characters of each string.\nOdd lines display odd chars.\n\n");
	//TODO: validate t > 0
	//unsigned int cnt = 0;
	char buf[10000];

	while ( t) {
		
		scanf("%s", buf);   
		/* TODO: validate input */
		/* TODO: treat buffer better */
		for (int idx = 0; idx < strlen(buf); idx = idx+2) {
			if (t % 2 == 0) {
				// if even line of input get even elements of string
				printf("%c ", buf[idx]);
			}
			else {			
				// else get odd elements of string
				printf("%c ", buf[idx+1]);
			}
		}
		printf("\n");
		
		// decrement counter
		t--;
	}


	return 0;
}