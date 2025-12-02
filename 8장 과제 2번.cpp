#include <stdio.h>

int func(int a){
	if(a>=90 && a<=100)
		return 'A';
	else if(a>=80) return 'B';
	else if(a>=70) return 'C';
	else if(a>=60) return 'D';
	else return 'F';
}

int main(){
	int a;
	scanf("%d", &a);
	printf("%c",func(a));
}
