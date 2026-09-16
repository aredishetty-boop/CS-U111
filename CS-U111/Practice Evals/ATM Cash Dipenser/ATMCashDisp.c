#include <stdio.h>
int main()
{
	int a, c2000, c500, c200, c100;
	scanf("%d", &a);
	if( a<=0 || a%100!=0 )
	{
		printf("Invalid Amount Entered\n");
	}
	else
	{
		while(a>=2000){
				a-=2000;
				c2000++;
				};
		while(a>=500){
				a-=500;
				c500++;
				};

		while(a>=200){
				a-=200;
				c200++;
				};

		while(a>=100){
				a-=100;
				c100++;
				};

		printf("%d %d %d %d\n", c2000, c500, c200, c100);
	}
	return 0;
}