#include <stdio.h>
#include <stdlib.h>

int main() {
	int *a;
    int n,i = 0;

    a = malloc(sizeof(int));

    do
    {
        scanf("%d", &a[i]);
        a = realloc(a, (i + 2) * sizeof(int));
    i++;
    }while (a[i-1] != 0);
    
    n=i;
    for(i=0;i<n-1;i++) {
    	printf("%d ",a[i]);
	}
	return 0;
}
