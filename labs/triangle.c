//Matthew Garcia Lab 1: Triangle Input

#include <stdio.h>
#include <math.h>

int main()
{
	char run = 'y';
	while(run != 'n')
	{
		printf("Intput 3 positive integers from the terminal to determine if they are valid sides of a triangle \n");

		double side_1, side_2, side_3;

		printf("\nEnter the first side \n");
		scanf("%lf", &side_1);

		printf("\nEnter the second side \n");
		scanf("%lf", &side_2);

		printf("\nEnter the third side \n");
		scanf("%lf", &side_3);

		double sum = (side_1 + side_2 + side_3) / 2;
		double area = (sum * (sum-side_1) * (sum - side_2) * (sum - side_3) );

		if(side_1 < 0 || side_2 < 0 || side_3 < 0)
		{
			printf("\nInvalid input, there is a negative integer");
			printf("\nFirst side: %f", side_1);
			printf("\nFirst side: %f", side_2);
			printf("\nFirst side: %f", side_3);
		}

		else if(side_1 == side_2 && side_1 == side_3)
		{
			printf("\nEqualatoral");		
			printf("\nFirst side: %f", side_1);
			printf("\nSecond side: %f", side_2);		
			printf("\nThird side: %f\n", side_3);
			printf("Area: %f\n", sqrt(area) );
		}

		else if(side_1 == side_2 || side_1 == side_3 || side_2 == side_3)
		{
			printf("\nIsoceles");
			printf("\nFirst side: %f", side_1);
			printf("\nSecond side: %f", side_2);
			printf("\nThird side: %f\n", side_3);
			printf("Area: %f\n", sqrt(area) );
		}

		else
		{
			printf("\nScalene");
			printf("\nFirst side: %f", side_1);
			printf("\nSecond side: %f", side_2);
			printf("\nThird side: %f\n", side_3);
			printf("Area: %f\n", sqrt(area) );
		}

		printf("Do you want to run this program again? Yes(y), No(n)");
		scanf("%c%*c", &run);
	}
}
