/*Week-5 Task #3
Write an interactive program to interchange the value of two variables.  
Note :- (both ways, using temporary variable and not using any other value) */

#include<stdio.h>

main() {
	{/*interchanging values with a temporary variabe*/
	int a, b, temp;
	printf("Enter two integer numbers: ");
	scanf("%d %d", &a, &b);
	
	printf("\nValues of 'a' and 'b' before swapping:\n");
	printf("a = %d and b = %d", a, b);
	
	temp = a;
	a = b;
	b = temp;
	
	printf("\nValues of 'a' and 'b' after swapping:\n");
	printf("a = %d and b = %d", a, b);}
	
	{printf("\n");
	printf("\n");}
	
	{/*interchanging values without a temporary variable*/
	int a, b;
	printf("Enter two integer numbers: ");
	scanf("%d %d", &a, &b);
	
	printf("\nValues of 'a' and 'b' before swapping:\n");
	printf("a = %d and b = %d", a, b);
	
	a = a + b;
	b = a - b;
	a = a - b;
	
	printf("\nValues of 'a' and 'b' after swapping:\n");
	printf("a = %d and b = %d", a, b);}
}
