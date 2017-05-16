#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

# int main() {

	# int n = 0;
	# printf("Enter an integer between 2 and 20: ");
	# scanf("%d", &n);

	# // TODO: input validate

	# for (int cnt = 1; cnt <= 10; cnt++) {
		# printf("%d x %d = %d\n", n, cnt, n*cnt);

	# }
	# return 0;
# }

n = int(input("Enter an integer between 2 and 20: "))
for i in range(1,n+1):
	print("{} x {} = {}".format(n, i, n*i))