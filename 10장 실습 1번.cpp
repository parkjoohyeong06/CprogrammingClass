#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	char arr[81];
	fgets(arr, sizeof(arr), stdin);
	arr[strcspn(arr, "\n")] = '\0';
	int len = strlen(arr);
	for(int i=len-1;i>=0;i--)
		printf("%c", arr[i]);
	return 0;
}
