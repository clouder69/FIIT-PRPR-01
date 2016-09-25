/**
 * 
 * 4. uloha
 * BMI - height
 * Patrik Suchovsky (c) 2016
 * 
**/

#include <stdio.h>
#include <math.h>

int main()
{

	double bmi,w;

	scanf("%lf %lf", &bmi, &w);

	printf("Vyska: %.1f\n", sqrt(w/bmi));

	return 0;
}

