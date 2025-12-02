#include <stdio.h>
void func(int n){
	int sum = 0;
	for(int i = n;i>0;i--){
		if(n%i == 0)
			sum++;
	}
	printf("%d", sum);
}

int main(){
	int n;
	scanf("%d", &n);
	func(n);
}
