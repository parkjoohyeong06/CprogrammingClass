#include <stdio.h>

void print_time(int a){
    int h = a / 3600;
    int m = (a % 3600) / 60;
    int s = a % 60;

    if (h > 0)
		printf("%d시간 ", h);
    if (m > 0)
		printf("%d분 ", m);
    if (s > 0)
		printf("%d초", s);
}

int main(void){
    int n;
    scanf("%d", &n);
    print_time(n);
    return 0;
}
