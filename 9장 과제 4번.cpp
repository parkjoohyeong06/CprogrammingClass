#include <stdio.h>
#include <stdlib.h>
int main(){
	int m, n, arr[100][100], sum=0;
	double avg;
	scanf("%d %d", &n, &m);
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++){
			scanf("%d", &arr[i][j]);
			sum += arr[i][j];
		}
	avg = sum / (n*m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(arr[i][j]<avg)
				printf("0 ");
			else if(arr[i][j]>=0)
				printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
