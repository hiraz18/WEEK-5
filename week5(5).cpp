/*Week-5 Task #5
Write a c Program to find the area and perimeter of the different Shapes.*/

#include<stdio.h>
#include<math.h>
#include<string.h>

main() {
	float area, perimeter;
	char shape[30];
	
	printf("Enter a shape (rectangle, circle, triangle, cube): \n");
	scanf("%s", shape);
	
	/*i) Rectangle*/
	if (strcmp(shape, "rectangle") == 0) {
		float length, width;
		printf("Enter the length and width of the rectangle: \n");
		scanf("%f %f", &length, &width);
		area = length * width;
		perimeter = 2 * (length+width);
		printf("Area = %.2f, Perimeter = %.2f", area, perimeter);
	}
	
	/*ii) Circle*/
	if (strcmp(shape, "circle") == 0) {
		#define pi 3.14159
		float r;
		printf("\nEnter the radius of the circle: \n");
		scanf("%f", &r);
		area = pi * pow(r,2);
		perimeter = 2 * pi * r;
		printf("Area = %.2f, Perimeter = %.2f", area, perimeter);
	}
	
	/*iii) Triangle*/
	if (strcmp(shape, "triangle") == 0) {
		float base, height, side_a, side_b;
		printf("\nEnter the base and height of the triangle: \n");
		scanf("%f %f", &base, &height);
		area = (base*height) / 2;
		printf("\nEnter the length of sides a and b of the triangle: \n");
		scanf("%f %f", &side_a, &side_b);
		perimeter = base + side_a + side_b;
		printf("Area = %.2f, Perimeter = %.2f", area, perimeter);
	}
	
	/*iv) Cube*/
	if (strcmp(shape, "cube") == 0) {
		float side;
		printf("\nEnter the length of side of the cube: \n");
		scanf("%f", &side);
		area = 6 * pow(side,2);
		perimeter = 12 * side;
		printf("Area = %.2f, Perimeter = %.2f", area, perimeter);
	}
	else 
		printf("Invalid Input.");
}
