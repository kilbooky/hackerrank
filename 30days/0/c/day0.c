#include <stdio.h>
#include <stdlib.h>

int main(){
	char input_string[88];
	scanf("%[^\n]", input_string);
	printf("Hello, World.\n");
	
	// TODO: write a line of code here that prints the contents of input_string to stdout.
	printf("%s", input_string);
	return 0;
}