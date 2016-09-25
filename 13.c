/**
 * 
 * 13. uloha
 * znaky
 * Patrik Suchovsky (c) 2016
 * 
**/

#include <stdio.h>

int main()
{
	char a;

	scanf("%c", &a);

	if( (a >= 'a' && a <= 'z') 
	 || (a >= 'A' && a <= 'Z') 
	 || (a >= '0' && a <= '9') )
		printf("Alfanumericky znak\n");
	else
		printf("Interpunkcny znak\n");

	return 0;
}

