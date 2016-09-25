/**
 * 
 * 6. uloha
 * words
 * Patrik Suchovsky (c) 2016
 * 
**/

#include <stdio.h>

int main()
{
	char a,b;

	scanf("%c %c", &a, &b);

	a -= ('a' - 'A');
	b -= ('a' - 'A');

	printf("%c %d\n", a, a);
	printf("%c %d\n", b, b);

	return 0;
}

