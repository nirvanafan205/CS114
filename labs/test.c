#include <stdio.h>

int main()
{
	char input, op;
	int num,num_2;

	while(input = getchar())
	{
		if(input == EOF || input == 32) 
		{
			break;
		}

		else if(input >= 48 && input <= 57)
		{
			num = (input - 48) + num * 10;
		}

	}

	printf("%d ", num); 

	while(input = getchar() )
	{
		if(input == EOF || input == 32)
		{
			break;

		}

		switch(input)
		{
			case 37:
				op = 37;
				break;

			case 42:
				op = 42;
				break;


			case 43:
				op = 43;
				break;

			case 45:
				op = 45;
				break;

			case 47:
				op = 47;
				break;

			default:
				printf("input error");
		}
	}

	while(input = getchar() )
	{
		if(input == EOF || input == 32)
		{
			break;
		}

		else if(input >= 48 && input <= 57)
		{
			num_2 = (input - 48) + num_2 * 10;
		}
	}

	printf("%c ", op);
	printf("%d", num_2);
}
