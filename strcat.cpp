#include <stdio.h>
#include <string.h>
void my_strcat(char *a, char *b){
	// a 끝으로 포인터 이동 
	while(*a != '\0')
		a++;
	while(*b != '\0'){
		*a = *b;
		a++;
		b++;
	}
	a = '\0';
}

int main(){
	char a[10], b[10];
	scanf("%s", a);
	scanf("%s", b);
	my_strcat(a, b);
	printf("%s", a);
}
