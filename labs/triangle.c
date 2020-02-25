//Matthew Garcia Lab 1: Triangle Input

#include <stdio.h>
#include <math.h>

int main()
{
	int runs;

	printf("How many times would you like to check for Triangle input?");

	scanf("d", &runs);

	for(int i = 0; i < runs; i++)
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

		if(side_1 || side_2 || side_3 < 0)
		{
			printf("Invalid input, there is a negative integer")
			printf("First side: %f", side_1)
			printf("First side: %f", side_2)
			printf("First side: %f", side_3)
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
	}
}

/*
   Intput 3 positive integers from the terminal to determine if they are valid sides of a triangle 

   Enter the first side 
   2

   Enter the second side 
   2

   Enter the third side 
   2

   Equalatoral
   First side: 2
   Second side: 2
   Third side: 2
Area: 1.732051 
*/
