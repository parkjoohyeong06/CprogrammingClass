#include <stdio.h>
#include <string.h>

int my_strlen(char arr[]){
	arr[strcspn(arr, "\n")] = '\0';
	return strlen(arr);
}
int main(){
	char arr[100];
	fgets(arr, sizeof(arr), stdin);
	printf("Length : %d", my_strlen(arr));
}
