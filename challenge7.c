/*
Functions in C
Objective

In this challenge, you will learn simple usage of functions in C. Functions are a bunch of statements glued together. A function is provided with zero or more arguments, and it executes the statements on it. Based on the return type, it either returns nothing (void) or something.

You have to write a function int max_of_four(int a, int b, int c, int d) which reads four arguments and returns the greatest of them. 
*/
#include <stdio.h>
int max_of_four(int,int,int,int);
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a,int b,int c,int d)
{
	int gre;
	if(a>b && a >c && a >d)
		gre = a;
	else if(b>a && b>c && b>d)
		gre = b;
	else if(c>a && c>b && c>d)
		gre = c;
	else if(d>a && d>b && d>c)
		gre = d;
	else if(a=b=c=d)
		gre = a;
return gre;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}


