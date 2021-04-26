/*
output stars
Welcome
Enter no,of values=
5
enter value=1
enter value=2
enter value=3
enter value=4
enter value=5
*
**
***
****
*****
*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,m,a[200];
	//clrscr();
	printf("Welcome\nEnter no,of values=\n");
	scanf("%d" ,&n);

	i=0;
	while(i<n)
	{       printf("enter value=");
		scanf("%d", &a[i]);
		i=i+1;
	}

		i=0;
		while(i<n)
		{
			m=a[i]; 
			while(m>=1)
			{
				printf("*");
				m=m-1;
			}
			printf("\n");
			i=i+1;
		}

	getch();

}
