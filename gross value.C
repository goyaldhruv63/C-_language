#include<stdio.h>
int main()
{
	float gross,basic,allowances;
	printf("enter yor basic salary:");
	scanf("%f",&basic);
	printf("enter your allowances salary:");
	scanf("%f",&allowances);
	gross=basic+allowances;
	printf("your gross:%f",gross);
	return 0;
}
