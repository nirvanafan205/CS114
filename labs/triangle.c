//Matthew Garcia Lab 1: Triangle Input

#include<stdio.h>

int main()
{
	printf("Intput 3 positive integers from the terminal to determine if they are valid sides of a triangle \n");

	int side_1, side_2, side_3;

	printf("\nEnter the first side \n");
	scanf("%d", &side_1);


	printf("\nEnter the second side \n");
	scanf("%d", &side_2);


	printf("\nEnter the third side \n");
	scanf("%d", &side_3);


	int check_1 = side_1 + side_2;
	int check_3 = side_2 + side_3;
	int check_2 = side_2 + side_3;

	if(check_1 > side_3 || check_2 > side_1 || check_3 > side_1)
	{
		int sum = ( side_1 + side_2 + side_3 


	}

	else
	{
		printf("%d", 
	}

}
