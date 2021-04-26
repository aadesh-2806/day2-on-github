/*
sum of array

Enter number of elements: 5
Enter value: 12
Enter value: 23
Enter value: 43
Enter value: 45
Enter value: 24
147
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int i,n,a[100],s;

	printf("Enter number of elements: "); //sum of array
	scanf("%d",&n);

	for(i=0,s=0;i<n;i++)
	{
		printf("Enter value: ");
		scanf("%d",&a[i]);
		s = a[i]+s;
	}


	printf("%d",s);
	getch();

}
