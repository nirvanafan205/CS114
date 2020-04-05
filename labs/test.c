#include <stdio.h>

int main()
{
	char input;
	int num,num_2;
	char op;

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

		else if(input >= 48 && input <= 57)
		{
			num_2 = (input - 48) + num_2 * 10;
		}
	}

	printf("%d", num_2);
}
