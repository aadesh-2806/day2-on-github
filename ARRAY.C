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
