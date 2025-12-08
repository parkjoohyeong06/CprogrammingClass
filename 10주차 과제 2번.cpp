#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	char arr[201];
	int alpha_upper[26] = {0};
	int alpha_lower[26] = {0};
	fgets(arr, sizeof(arr), stdin);
	arr[strcspn(arr, "\n")] = '\0';
	int len = strlen(arr);
	for(int i=0;i<len;i++){
		if(arr[i]>='a' && arr[i]<='z')
			alpha_lower[arr[i] - 'a']++;
		else if(arr[i]>='A' && arr[i]<='Z')
			alpha_upper[arr[i]-'A']++;
	}
	for(int i=0;i<26;i++){
		if(alpha_upper[i]>0) 
			printf("%c : %d\n", 'A'+i, alpha_upper[i]);
	}
	for(int i=0;i<26;i++){
		if(alpha_lower[i]>0)
			printf("%c : %d\n", 'a'+i, alpha_lower[i]);
	}
}
