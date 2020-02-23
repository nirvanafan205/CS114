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

	if(side_1 == side_2 && side_1 == side_3)
	{
		printf("\nEqualatoral\n");

		printf("\nFirst side %d \n", side_1);
		printf("\nSecond side %d \n", side_2);
		printf("\nThird side %d \n", side_3);
	}

	else if(side_1 == side_2 || side_1 == side_3 || side_2 == side_3)
	{
		printf("\nIsoceles\n");

		printf("\nFirst side %d \n", side_1);
		printf("\nSecond side %d \n", side_2);
		printf("\nThird side %d \n", side_3);
	}

	else
	{
		printf("\nScalene\n");

		printf("\nFirst side %d \n", side_1);
		printf("\nSecond side %d \n", side_2);
		printf("\nThird side %d \n", side_3);

	}
}
