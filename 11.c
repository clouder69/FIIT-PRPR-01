/**
 * 
 * 11. uloha
 * zaokruhlenie
 * Patrik Suchovsky (c) 2016
 * 
**/

#include <stdio.h>
#include <math.h>

int main()
{
	double a;

	scanf("%lf", &a);

	printf("%.0f %.0f\n", floor(a) , a);

	return 0;
}

