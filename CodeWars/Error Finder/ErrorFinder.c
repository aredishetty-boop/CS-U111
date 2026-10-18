#include <stdio.h>

void printerError(char arr[100]){
	int error=0;
	int i;
	for(i=0; arr[i]!='\0'; i++){
		if(arr[i]<='m') error=error;
		else error++;
	}
	printf("%d/%d\n", error, i);
}

int main(){
	char arr[200];
	scanf("%s", arr);
	printerError(arr);
}
