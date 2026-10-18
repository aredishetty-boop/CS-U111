#include <stdio.h>

bool triDetector(int a, int b, int c){
	if(a<0||b<0||c<0){
		return false;
	}
	else{
		if(a+b>c && b+c>a && c+a>b){
			return true;
		}
		else return false;
	}
}

int main(){
	int a, b, c;
	scanf("%d,%d,%d", &a, &b, &c);
	bool t=triDetector(a,b,c);
	if(t==0) printf("false\n");
	else printf("true\n");
	return 0;
}
