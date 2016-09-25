/**
 * 
 * 3. uloha
 * BMI
 * Patrik Suchovsky (c) 2016
 * 
**/

#include <stdio.h>

int main()
{
	double h,w;

	scanf("%lf %lf", &h, &w);

	h /= 100;
	h *= h;

	printf("BMI: %.3f\n", w/h );

	return 0;
}

