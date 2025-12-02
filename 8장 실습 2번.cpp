#include <stdio.h>
int func(int a,int b, int c){
	int min = a;
	if(b<min) min=b;
	else if(c<min) min=c;
	return min;
}
int main(){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("Smallest value : %d", func(a, b, c));
}
