#include <stdio.h>
int func(int a, int b, char giho){
	switch(giho){
		case '+': return a+b; break;
		case '-':
			if(a>b){
				return a-b; break; }
			else if(b>a){
				return b-a; break; }
		case '*': return a*b; break;
		// switch-case문에서 default는 필수
		default: return 0; 
	}
}

int main(){
	int a,b;
	char giho;
	scanf("%d %c %d", &a, &giho, &b);
	printf("%d", func(a, b, giho));
	return 0;
}
