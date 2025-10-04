/*Week-5 Task #7
C Program to check whether an alphabet is vowel or consonant.*/

#include<stdio.h>

main() {
	char character;
	printf("Enter any alphabet: \n");
	scanf("%c", &character);
	if ((character >= 'A' && character <= 'Z') || (character >= 'a' && character <= 'z'))
		if (character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U' ||
			character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u')
			printf("\'%c\' is a vowel.\n", character);
	else
		printf("\'%c\' is a consonant.\n", character);
}
