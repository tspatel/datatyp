#include<stdio.h>
#include<conio.h>
main()
{
	float amt,rate,time,si;
	printf("enter the amount :");
	scanf("%f",&amt);
	printf("enter the rate :");
	scanf("%f",&rate);
	printf("enter the time :");
	scanf("%f",&time);
	si=(amt*rate*time)/100;
	printf("simple intrest %f",si);
		
}
