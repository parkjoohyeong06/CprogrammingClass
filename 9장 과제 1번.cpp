#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int func(int correct, int n){
	if(n>correct)
		return 1;
	else if(n<correct)
		return 2;
	else if(n==correct)
		return 3;	
}
int main(){
	srand(time(NULL));
	int correct = rand()%50 + 1;
	int n, value, sum=0;
	for(;;){
		printf("예상 숫자>> ");
		scanf("%d", &n);
		value = func(correct, n);
		sum++;
		printf("시도횟수: %d\n", sum);
		if(value == 1)
			printf("랜덤 숫자는 %d보다 작습니다.\n", n);			
		else if(value == 2)
			printf("랜덤 숫자는 %d보다 큽니다.\n", n); 
		else if(value == 3){
			printf("정답입니다."); break;  }
	}
}
