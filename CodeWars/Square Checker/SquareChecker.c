#include <stdio.h>

bool is_Square(int n){
	if(n==0) return true;
	else{
		for(long long i=0; i<n; i++){
		if(i*i==n) return true;
		}
	}
	return false;
}

int main(){
	int n;
	scanf("%d", &n);
	if(is_Square(n) == true) printf("is a square\n");
	else printf("not a square\n");
	return 0;
}
