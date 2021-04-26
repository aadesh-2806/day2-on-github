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
