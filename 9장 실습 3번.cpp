#include <stdio.h>
void func(int arr[], int a, int rot){
	int temp;
	if(a == 1){ // 오름차순 ascending 
		for(int i=0;i<rot-1;i++){
			for(int j=0;j<rot-1-i;j++){
				if(arr[j]>arr[j+1]){
					temp = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = temp;
				}
			}
		}
	}
	
	else if(a == 2){ // 내림차순 descending 
		for(int i=0;i<rot;i++){
			for(int j=0;j<rot;j++){
				if(arr[j]<arr[j+1]){
					temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;
				}
			}
		}
	}
	for(int i=0;i<rot;i++)
		printf("%d ", arr[i]);
}
int main(){
	int rot, a;
	scanf("%d", &rot);
	int arr[100];
	for(int i=0;i<rot;i++)
		scanf("%d", arr);
	scanf("%d", &a);
	func(arr, a, rot);
}
