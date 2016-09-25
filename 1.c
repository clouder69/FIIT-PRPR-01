/**
 * 
 * 1. uloha
 * Priemer 3 
 * Patrik Suchovsky (c) 2016
 *
**/

#include <stdio.h>

int main(void)
{
	double x,y,z,p;

	scanf("%lf %lf %lf", &x, &y, &z);
	p = (x+y+z)/3;

	printf("Priemer cisel %g %g %g je: %g\n", x, y, z, p);

	return 0;
}

