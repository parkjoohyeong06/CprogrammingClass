#include <stdio.h>
void sortArray(int arr[], int size){
	int temp;
	for(int i=0;i<size-1;i++){
		for(int j=i+1;j<size;j++){
			if(arr[i]>arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for(int i=0;i<size;i++){
		printf("%d ", arr[i]);
	}
}
int main(){
	int score[] = {99, 84, 91, 78, 89};
	int size = sizeof(score) /4;
	sortArray(score, size);
	return 0;
}
