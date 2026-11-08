#include <stdio.h>

float inverseSum(int n){
	float sum=0.00;
	if(n<=0) return sum=0.00;
	else{
		for(int i=0; i<n; i++){
			sum = sum + 1.0/(3*i+1);
		}
	}
	return sum;
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%.2f\n", inverseSum(n));
	return 0;
}
