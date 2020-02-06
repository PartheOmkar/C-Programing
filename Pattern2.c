#include<stdio.h>
int main()
{
	int i,j,n;
	//row
	printf("enter a value of row's ");
	scanf("%d",& n);
	n = n+1;
	for(i=1;i<n;i++)
	{
		//column
		for(j=1;j< 2*n-1;j++)
		{
			if(j >= n-(i-1) && j <= n+(i-1))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}

		}

		printf("\n");
	}
}
