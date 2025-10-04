/*Week-5 Task #4
Write a program in C that reads the length of the three side of a triangle (a, b, c) and determine what type of triangle it is, based on the following cases:*/

#include<stdio.h>
#include<math.h>

main() {
	float a, b, c;
	printf("Enter the lengths of the three sides of the triangle: \n");
	scanf("%f %f %f", &a, &b, &c);
	
	/*i) If a >b+c no triangle is formed.*/
	if (a > b+c)
		printf("No triangle is formed.\n");
	
	/*ii) If a^2 = b^2+c^2 a right-angled triangle is formed.*/
	else if (pow(a,2) == pow(b,2) + pow(c,2))
		printf("A right-angled triangle is formed.\n");
	
	/*iii) If a^2> b^2+c^2 an obtuse angled triangle is formed.*/
	else if (pow(a,2) > pow(b,2) + pow(c,2))
		printf("An obtuse-angled triangle is formed.\n");
	
	/*iv) If a^2< b^2+c^2 an acute angled triangle is formed.*/
	else if (pow(a,2) < pow(b,2) + pow(c,2))
		printf("An acute-angled triangle is formed.\n");
} 
