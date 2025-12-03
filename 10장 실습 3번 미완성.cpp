#include <stdio.h>
#include <string.h>
int main(){
	int sum=1;
	char arr[81];
	char alpha[26] = {0};
	fgets(arr, sizeof(arr), stdin);
	arr[strcspn(arr, "\n")] = '\0'; // 굳이 필요 없긴 한데.. 
	int len = strlen(arr);
/*--- arr 문자열에서  나온 최초의 알파벳은 1로 간주한다. ---*/ 
	alpha(arr) = {1};
/*--- 이후에도 같은 알파벳이 나오면 sum++; ---*/ 
	for(int i=0;i<len;i++){
		if(alpha[i] == alpha[i+□]);
			sum++;
	}
/*--- sum 값이 1 이상인 알파벳은 printf ---*/ 
	if(sum>1){
		printf("%c : %d", alpha, sum);
	}
} 
