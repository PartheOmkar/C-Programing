#include<stdio.h>
#include<string.h>
int main()
{
	int a, b;
	char *str[] = {"one", "two", "three", "four", "five", "six", "seven",  "eight",  "nine", "even", "odd"};

	scanf("%d\n%d", &a, &b);
  	for (int i=a; i<=b; i++)
	{
	    	if (i <= 9) 
		{
	    		printf ("%s\n", str[i-1]);
		}
	    	else
		{
	    		printf ("%s\n", str[9+(i%2)]);
		}

	}
return 0;
}
/* simple program is 
#include<stdio.h>
int main()
{
int a,b,i;
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++)
	{
		if(i<=9)
		{
			if(i==1)
				printf("one");
			else if(i==2)
				printf("two");
			else if(i==3)
				printf("three");
			else if(i==4)
				printf("four");
			else if(i==5)
				printf("five");
			else if(i==6)
				printf("six");
			else if(i==7)
				printf("seven");
			else if(i==8)
				printf("eight");
			else if(i==9)
				printf("nine");
			printf("\n");
		}
		else
		{
			if(i%2==0)
				printf("even");
			else
				printf("odd");
			printf("\n");
		}
	}
return 0;
}
*/
