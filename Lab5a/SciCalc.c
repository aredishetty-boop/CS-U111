#include <stdio.h>

void mainMenu(){
		printf("-------Main Menu-------\n");
		printf("1. Basic Arithmetic\n");
		printf("2. Trigonometry\n");
		printf("3. Exponentials\n");
		printf("4. Exit\n");
		printf("-----------------------\n\n");
		}
		
void basicArithmetic(){
printf("\n-------Basic Arithmetic-------\n");
printf("1. Addition\n");
printf("2. Substraction\n");
printf("3. Multiplication\n");
printf("4. Division\n");
printf("5. Return to Main Menu\n");
printf("------------------------------\n");
}

void trigonometry(){
printf("\n-------Trigonometry-------\n");
printf("1. Sine\n");
printf("2. Cosine\n");
printf("3. Tangent\n");
printf("4. Return to Main Menu\n");
printf("----------------------------\n");
}

void exponentials(){
printf("\n-------Exponential-------\n");
printf("1. Power\n");
printf("2. Square Root\n");
printf("3. Exponential\n");
printf("4. Natural Logarithm\n");
printf("5. Return to Main Menu\n");
printf("---------------------------\n");
}

int main()
{	
	int a;
	while (a!=4){	
	mainMenu();
	printf("Select an option:");
	scanf("%d", &a);
	
	if(a==1)
	{
	 basicArithmetic();
	 return 0;
	}
	else if (a==2)
	{
	 trigonometry();
	 return 0;
	}
	else if (a==3)
	{
	 exponentials();
	 return 0;
	}
	else{
		printf("Option not selected\n\n");
		mainMenu();
		printf("Select an option:");
		scanf("%d", &a);
		return 0;
		
	}
	}
	while (a==4){
		break;
	}
	return 0;
}