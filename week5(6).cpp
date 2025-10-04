/*Week-5 Task #6
C Program to find out the ASCII value of a character.*/

#include<stdio.h>

main() {
	char character;
	printf("Enter any character: \n");
	scanf("%c", &character);
	printf("The ASCII value of \'%c\' is %d\n", character, character);
}
