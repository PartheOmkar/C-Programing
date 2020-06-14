#include<stdio.h>
#define MAX 10
char gender;
char b ='b',g ='g';
int main()
{
	int marks[10],number_of_students;
	int i,sum=0;
	scanf("%d",&number_of_students);
	for(i=0;i<number_of_students;i++)
	{
		scanf("%d",&marks[i]);
	}
	scanf("%s",&gender);
	if(gender == b )
	{
		for(i=0;i<number_of_students;i++)
		{
			if(marks[i]%2!=0)
			{
				sum += marks[i];
			}
		}
	}	
	if(gender == g )
	{
		for(i=1;i<number_of_students;i++)
		{
			if(marks[i]%2==0)
			{
				sum +=marks[i];
			}
		}
	}
	printf("%d",sum);
return 0;
}
