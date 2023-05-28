#include <stdio.h>
#include "operations.h"

//variable to hold first number user enters
int userFirstNumber;	
//varaible to hold second number user enters
int userSecondNumber;	
//varaible to hold operation choice for users
int userChoiceOperation;
//variable for total
float total;

//array to hold operation characters 
char operationChars[] = {'+', '-', '*', '/'};

//function to collect user numbers
void getFirstNumber();
void getSecondNumber();

//function to print operations 
void operationChoices();

//function to preform calculations
void calculate();

float add(int a, int b){
	return (float)a + (float)b;
}

float sub(int a, int b){
	return (float)a - (float)b;
}

float mul(int a, int b){
	return (float)a * (float)b;
}

float quo(int a, int b){
	if( b == 0){
		printf("Error: Cannot Divide by 0!\n");
		calculate();
	}
	else{
		return (float)a / (float)b;
	}
}

void getFirstNumber(){
	printf("Enter a number: ");
	scanf("%d", &userFirstNumber);
}

void getSecondNumber(){
	printf("Enter another number: ");
	scanf("%d", &userSecondNumber);
}

void operationChoices(){
	printf("Operations:\n");
	printf("----------------\n");
	printf("*Use number to select (ex. 1 = addition)*\n");
	printf("[1] - Addititon\n");
	printf("[2] - Subtraction\n");
	printf("[3] - Multiplication\n");
	printf("[4] - Division\n");
	printf("Choose your operation: ");
	scanf("%d", &userChoiceOperation);
	//if user enters a number not in list print error msg
	if(userChoiceOperation < 1 || userChoiceOperation > 4){
		printf("Error: Invalid Operation Choice\n");
		operationChoices();
	}
}

void calculate(){
	getFirstNumber();
	operationChoices();
	getSecondNumber();
	if(userChoiceOperation == 1){
		total = add(userFirstNumber, userSecondNumber);
	}
	else if(userChoiceOperation == 2){
		total = sub(userFirstNumber, userSecondNumber);
	}
	else if(userChoiceOperation == 3){
		total = mul(userFirstNumber, userSecondNumber);
	}
	else if(userChoiceOperation == 4){
		total = quo(userFirstNumber, userSecondNumber);
	}

	printf("%d %c %d = %.2f\n", userFirstNumber, operationChars[userChoiceOperation-1], userSecondNumber, total);
}

int main(){
	calculate();
	return 0;
}
