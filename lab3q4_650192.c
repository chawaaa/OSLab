#include <stdio.h>
int main() {
	int n, sum=0, count=0;
	while(1){
	  	printf("enter a number : ");
	  	scanf("%d", &n);
		if(n < 1) break;
		sum += n;
		count++;
	}
		
	printf("summation = %d\n",sum);
	printf("Average = %.2f\n", (float)sum/count);
	return 0;
}
