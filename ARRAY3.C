/*
sum of array using while loop
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
int main()
{
	int i,n,s,a[200];
	//clrscr();
	printf("Welcome\nEnter no,of values=\n");
	scanf("%d" ,&n);
	i=0;
	s=0;
	while(i<n)
	{       printf("enter value=");
		scanf("%d", &a[i]);											//total sum
		s=a[i]+s;
		i=i+1;

	}
	printf("%d",s);
	getch();

}
