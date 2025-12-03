#include <stdio.h>
#include <stdlib.h>
void func(int a, int grade[]){
	double avg = 0;
	for(int i=0;i<a;i++){
		avg += grade[i];
	}
	avg = avg / a;
	printf("%.2f", avg);
}
int main(){
	int a;
	scanf("%d", &a);
	int *grade = (int*)malloc(sizeof(int) * a);
	for(int i=0;i<a;i++)
		scanf("%d", &grade[i]);
	func(a, grade);
	free(grade);
}
