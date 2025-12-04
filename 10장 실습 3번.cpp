#include <stdio.h>
#include <string.h>
int main(){
	char arr[81];
	int alpha[26] = {0}; // <- 알파벳 a~z 모두0이라고 가정 
	char ch;
	fgets(arr, sizeof(arr), stdin);
	arr[strcspn(arr, "\n")] = '\0'; // strlen 쓰려면 일단 개행문자 제거 
	int len = strlen(arr);
	for(int i=0;i<len;i++){
			ch = arr[i];
		if(ch>='A' && ch<='Z')
			alpha[ch - 'A']++;
		else if(ch>='a' && ch<='z')
			alpha[ch - 'a']++;
	}
	for(int i=0;i<26;i++)
		if(alpha[i] > 0)
			printf("%c : %d\n", 'A'+i, alpha[i]);
}
