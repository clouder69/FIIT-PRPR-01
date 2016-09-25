/**
 * 
 * 7. uloha
 * pismena 2
 * Patrik Suchovsky (c) 2016
 * 
**/

#include <stdio.h>

int main()
{
	char a,b;

	scanf("%c %c", &a, &b);

	a += ('a' - 'A');
	b += ('a' - 'A');

	printf("%c %c\n", b, a);

	return 0;
}

