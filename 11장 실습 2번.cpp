#include <stdio.h>
enum Month{
	Jan = 1,
	Feb,
	March,
	April,
	May,
	June,
	July,
	Aug,
	Sep,
	Oct,
	Nov,
	Dec
};
int main(){
	for(int i=Jan;i<Dec+1;i++)
		printf("%d ", i);
}
