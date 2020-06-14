/*
Task

You have to complete the function void update(int *a,int *b), which reads two integers as argument, and sets "a" with the sum of them, and "b" with the absolute difference of them.
a` = a+b
b` = a-b
*/
#include <stdio.h>
#include <stdlib.h>
void update(int *a,int *b) {
    // Complete this function 
	int x,y;
	x = *a + *b;
	y = *a - *b;
	*a = x;
	*b =abs(y);  // abs is given to convert negative number to positive number vise varsa -abc
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}


