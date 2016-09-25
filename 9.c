/**
 * 
 * 9. uloha
 * objem valca
 * Patrik Suchovsky (c) 2016
 * 
**/

#include <stdio.h>

#define PI 3.14

int main()
{
	double r,v;

	scanf("%lf %lf", &r, &v);

	printf("Objem: %.2f\n", PI*r*r*v );

	return 0;
}

