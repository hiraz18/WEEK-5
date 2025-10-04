/*Week-5 Task #1
Write a program to print the no. of bytes used by the different data type using the sizeof() operator.*/

#include<stdio.h>

main() {
	printf("No. of bytes used by char = %d\n", sizeof(char));
	printf("No. of bytes used by short = %d\n", sizeof(short));
	printf("No. of bytes used by int = %d\n", sizeof(int));
	printf("No. of bytes used by long = %d\n", sizeof(long));
	printf("No. of bytes used by float = %d\n", sizeof(float));
	printf("No. of bytes used by double = %d\n", sizeof(double));
	printf("No. of bytes used by long double = %d\n", sizeof(long double));
	return 0;
}
