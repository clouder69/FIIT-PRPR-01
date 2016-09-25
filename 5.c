/**
 * 
 * 5. uloha
 * BMI - multi
 * Patrik Suchovsky (c) 2016
 * 
**/

#include <stdio.h>

int main()
{
	unsigned int i;
	double h,w,bmi;

	scanf("%d", &i);

	for( ; i > 0; i--)
	{
		scanf("%lf %lf", &h, &w);

		h /= 100;
		h *= h;
		bmi = w/h;
	
		printf("BMI: %.3f\n", bmi );
	
		if(bmi <= 18.5)
			printf("podvaha\n");
		else if(bmi <= 25)
			printf("normalna hmotnost\n");
		else if(bmi <= 30)
			printf("nadvaha\n");
		else
			printf("obezita\n");
	}

	return 0;
}

