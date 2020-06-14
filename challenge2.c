#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	int a,b,c,d;
	float x,y,p,q;
	scanf("%d %d",&a,&b);
	scanf("%f %f",&x,&y);
	c =a+b;
	d =a-b;
	p =x+y;
	q = x-y;
	printf("%d %d",c,d);
	printf("\n%f %f",p,q);
	return 0;
}
