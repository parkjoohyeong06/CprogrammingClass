#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	char arr[51], find_chr;
	int i;
	fgets(arr, sizeof(arr), stdin);
	scanf("%c", &find_chr);
	for(i=0;arr[i] != '\0';i++)
		if(arr[i] == find_chr) break;
	printf("문자 %c의 인덱스는 %d 입니다.", find_chr, i);
}
