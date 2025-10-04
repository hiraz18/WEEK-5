/*Week-5 Task #2
Write an interactive program to find Simple Interest and Compound Interest, where Principle, Rate and Time are 
taken from the keyboard.*/

#include<stdio.h>
#include<math.h>

main() {
	float p, r, t, si, ci;
	
	printf("Enter Principal amount: ");
	scanf("%f", &p);
	
	printf("Enter Rate of Interest: ");
	scanf("%f", &r);
	
	printf("Enter Time (in years): ");
	scanf("%f", &t);
	
	si = (p*r*t) / 100;
	ci = p * pow((1+r / 100), t) - p;
	
	printf("\nSimple Interest = %.2f\n", si);
	printf("\nCompound Interest = %.2f\n", ci);
	
	return 0;
}
