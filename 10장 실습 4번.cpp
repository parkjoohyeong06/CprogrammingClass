#include <stdio.h>
#include <string.h>
int main(){
	char arr[3][31], sc[399] = "";
	for(int i=0;i<3;i++){
		scanf("%s", &arr[i]);
		strcat(sc, arr[i]);
	}
/*--- sc 문자열 길이 반환 ---*/ 
	sc[strcspn(sc, "\n")] = '\0';
	int len = strlen(sc);
	printf("Merged string length : %d\n", len);
/*--- sc 출력 ---*/
		printf("Merged string : %s", sc);
}
