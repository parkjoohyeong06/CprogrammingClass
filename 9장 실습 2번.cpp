#include <stdio.h>
#include <stdlib.h>
int main(){
	int *a = (int*)malloc(sizeof(int));
	int *b = (int*)malloc(sizeof(int));
	int *c = (int*)malloc(sizeof(int));
	*a = 100;
	*b = 101;
	*c = 102;
	printf("%d\n%d\n%d", *a,*b,*c);
	free(a); free(b); free(c);
	return 0;
}
