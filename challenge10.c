#include<stdio.h>
#define MAX 100
int main()
{
	int i,a[MAX],n,sum;
	scanf("%d\n",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		sum += a[i];
	}
	printf("%d\n",sum);
return 0;
}
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
  
    int n, *arr, i, sum = 0;
    scanf("%d", &n);
    arr = (int*) malloc(n * sizeof(int));
    for(i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }

    for(i = 0; i < n; i++) {
        sum += *(arr + i);
    }

    printf("%d\n", sum);
    free(arr);
    return 0;
}
*/
