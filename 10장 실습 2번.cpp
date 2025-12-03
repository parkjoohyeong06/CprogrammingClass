#include <stdio.h>
#include <string.h>

void reverseString(char *arr){
	int left = 0;
	int right = strlen(arr) - 1;
	while(left<right){
		char temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
		right--;
	}
}
int main(){
	char arr[50];
	fgets(arr, sizeof(arr), stdin);
	arr[strcspn(arr, "\n")] = '\0';
	int len = strlen(arr);
	reverseString(arr);
	printf("%s", arr);
}
