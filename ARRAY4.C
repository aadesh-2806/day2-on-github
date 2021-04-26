#include<stdio.h>

int main()
{
	int i,n,a[20];
	float c;

	printf("Welcome aadesh agrawal(2019uec1660)\nEnter no.of values=");
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
