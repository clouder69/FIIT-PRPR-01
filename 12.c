/**
 * 
 * 12. uloha
 * pismena 3
 * Patrik Suchovsky (c) 2016
 * 
**/

#include <stdio.h>

int main()
{
	char a,b,c;
	int p = 0;/* pocet podobnych */

	scanf("%c %c %c", &a, &b, &c);

	if( a==b )
		p++;
	if( b==c )
		p++;
	if( a==c )
		p++;

	switch( p )
	{
		case 0: printf("Vsetky su rozne\n"); break;
		case 1: printf("Dve su rovnake\n"); break;
		case 3: printf("Vsetky su rovnake\n"); break;
	}

	return 0;
}

