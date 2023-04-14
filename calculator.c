#include <stdio.h>


int main(){

	char operator;
	int choose, scanf_result;
	double num1, num2, result;

	printf("*******************************\n");
	printf("** +-*/ CALCULATOR IN C /*-+ **\n");
	printf("*******************************\n\n");


	printf("\nEnter the first number: ");
	scanf("%lf", &num1);

	printf("\nEnter the second number: ");
	scanf("%lf", &num2);


	do{

		printf("*******************************\n");
		printf("**** CHOOSE AN OPERATION: *****\n");
		printf("****                      *****\n");
		printf("****                      *****\n");
		printf("**** 1: Addition          *****\n");
		printf("**** 2: Subtraction       *****\n");
		printf("**** 3: Multiplication    *****\n");
		printf("**** 4: Division          *****\n");
		printf("****                      *****\n");
		printf("****                      *****\n");
		printf("*******************************\n");

		printf("Enter an option: ");
		scanf_result = scanf(" %d", &choose);

		if(scanf_result != 1){
			printf("Invalid operator. Try again.\n\n\n");
			while(getchar() != '\n'){}
				continue;
		}

		switch(choose){
			case 1:
				result = num1 + num2;	
				operator = '+';
				break;
			case 2:
				result = num1 - num2;
				operator = '-';
				break;
			case 3:
				result = num1 * num2;
				operator = '*';
				break;
			case 4:
				if(num2 == 0){
					printf("Division by zero.\n");
					return 0;
				}
				result = num1 / num2;
				operator = '/';
				break;

			default:
				printf("Invalid operator. Try again.\n\n\n");
				break;
		}

		if(choose >= 1 && choose <= 4){
			break;
		}
		


	}while(1);
		

		printf("%.2lf %c %.2lf = %.2lf", num1, operator, num2, result);


	return 0;
}

