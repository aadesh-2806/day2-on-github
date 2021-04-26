/*
find average
Welcome
Enter no.of values=5
enter value=324
enter value=23
enter value=23
enter value=23
enter value=23
sum=416.000000
average=83.199997
*/


#include<stdio.h>

int main()
{
	int i,n,a[20];
	float c;

	printf("Welcome\nEnter no.of values=");
	scanf("%d" ,&n);
	c=0;																//average
	for(i=0;i<n;i++)
	{       
		printf("enter value=");
		scanf("%d", &a[i]);
		c=c+a[i];
	}
	printf("sum=%f\n",c);
	printf("average=%f",c/n);
	return 0;

}
