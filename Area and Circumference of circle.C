#include<stdio.h>
int main()
{
	int rad;
	float pi=3.14,area,ci;
	printf("\nenter rad of circle:");
	scanf("%d", &rad);
	area=pi*rad*rad;
	printf("\n area of circle: %f", area);
	ci=2*pi*rad;
	printf("\n ci: %f",ci);
	return 0;
	
	
}
