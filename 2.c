/**
 * 
 * 2. uloha
 * Dan
 * Patrik Suchovsky (c) 2016
 * 
**/

#include <stdio.h>

int main()
{

	double c;

	scanf("%lf", &c);

	printf("Cena bez dane: %g\n", c);
	printf("Predajna cena s danou 20%%: %.1f\n", c+((c/100.0)*20.0) );

	return 0;
}

