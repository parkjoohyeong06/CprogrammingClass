#include <stdio.h>
void func(int n){
	for(int i=1;i<=n;i++){
		int isPrime = 1; // i는 소수라고 가정하고 시작
		if(i<2)
			isPrime = 0; //i는 소수가 아님
		else{
			for(int j=2;j<i;j++){
				if(i%j==0){
					isPrime = 0;
					break;
				}
			}
		}
	if(isPrime == 1)
		printf("%d ", i);
	}
}

int main(){
	int n;
	scanf("%d", &n);
	func(n);
	return 0; 
}
