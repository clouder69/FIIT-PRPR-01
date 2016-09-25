/**
 * 
 * 10. uloha
 * vyrazy
 * Patrik Suchovsky (c) 2016
 * 
**/

#include <stdio.h>

int main()
{
	int a,b,c,d,e;
	int aa,bb,cc,dd,ee;

	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	scanf("%d %d %d %d %d", &aa, &bb, &cc, &dd, &ee);

	printf("%d\n", (e / --a * b++ / c++) );
	printf("%d\n", (aa %= bb = dd = 1 + ee / 2) );

	return 0;
}

