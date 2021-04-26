/*
find max

Welcome
Enter no,of values=
5
enter value=12
enter value=23
enter value=67
enter value=45
enter value=32
67
*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int i,m,n,a[200];
	//clrscr();
	printf("Welcome\nEnter no,of values=\n");
	scanf("%d" ,&n);

	i=0;
	while(i<n)
	{       printf("enter value=");
		scanf("%d", &a[i]);
		i=i+1;

	}

			m=a[0];		//to find max
			i=1;
			while(i<n)
			{
			     if(a[i]>m)
			     {
					m=a[i];
			     }
				i=i+1;
			}
			 printf("%d",m);
	getch();

}
