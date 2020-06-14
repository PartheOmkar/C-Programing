/*
In this problem, you need to print the pattern of the following form containing the numbers from 1 to n

.

                            4 4 4 4 4 4 4  
                            4 3 3 3 3 3 4   
                            4 3 2 2 2 3 4   
                            4 3 2 1 2 3 4   
                            4 3 2 2 2 3 4   
                            4 3 3 3 3 3 4   
                            4 4 4 4 4 4 4   

Input Format

The input will contain a single integer n
. 
*/
#include<stdio.h>
int main()
{
	int n,no,i,j,k;
	int col1=0,col2=0,row1,row2;
	row1 = no;
	row2 = no;
	scanf("%d",&n);
	printf("%d\n",n);
	no = n+(n-1);
	printf("%d",no);
	/*for(i=0;i<no;i++)
	{
		k =n;
		if(i>no/2)
		{
			for(j=i;j<no-i;j++)
			{      
				printf("%d",k);
				k--;
			}
			printf("\n");
		}
		else
		{
			
		}
	}*/
return 0;
}
