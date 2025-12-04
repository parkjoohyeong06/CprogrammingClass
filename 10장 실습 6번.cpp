#include <stdio.h>
#include <string.h>
void my_strchr(char *arr, char a){
	for(int i=0;arr[i] != 0;i++){
		if(arr[i] == a)
			printf("%c ", a);
	}
}
int main(){
	char arr[100], a;
	fgets(arr, sizeof(arr), stdin);
	scanf("%c", &a);
	arr[strcspn(arr, "\n")] ='\0';
	my_strchr(arr, a);
}
