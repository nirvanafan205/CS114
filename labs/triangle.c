//Matthew Garcia Lab 1: Triangle Input

#include<stdio.h>

int main()
{
	printf("Intput 3 positive integers from the terminal to determine if they are valid sides of a triangle \n");

	int side_1, side_2, side_3;

	printf("Enter the first side \n");

	scanf("%d", &side_1);

	if(side_1 < 0)
	{
		printf("Intput is not a positive integer");

		exit(0);
	}

	printf("Enter the second side \n");

	scanf("%d", &side_2);

	if(side_2 < 0)
	{
		printf("Intput is not a positive integer");

		exit(0);	
	}

	printf("Enter the third side \n");

	scanf("%d", &side_3);

	if(side_3 < 0)
	{
		printf("Intput is not a positive integer");

		exit(0);
	}
}
