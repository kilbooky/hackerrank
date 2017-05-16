#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	unsigned int t;
	unsigned int WARNING_LOOP = 2;
	char buf[10000];
	char *even = NULL;
	char *odd = NULL;



	printf("Enter an integer between 1 and 10: ");
	scanf("%d", &t);
	//TODO: validate t > 0
	while(t < 0 || t > 10 || sizeof(&t) != sizeof(unsigned int)  ){
		if (WARNING_LOOP) {
			printf("%d does not meet the constraints.\nPlease enter an integer between 1 and 10: ", t);
			scanf("%d", &t);
			WARNING_LOOP--;
		}
		else {
			return 1;
		}
		
		
	}
	printf("Type strings below.\nEven lines display even characters of each string.\nOdd lines display odd chars.\n\n");
	while ( t) {
		
		scanf("%s", buf); 
		/* TODO: use something safer than scanf */
		/* TODO: validate input */
		/* TODO: treat buffer better */
		for (int idx = 0; idx < strlen(buf); idx++) {
			if (idx % 2 == 0) {
				// if  even index store into 
				strcat(even, idx);
			}
			else {
				strcat(odd, &idx);
			}
			// if even line of input get even elements of string
			}
		}
		printf("\n");
		t--;
	}


	return 0;
}