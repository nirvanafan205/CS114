#include <stdio.h>

int main()
{
	char input;
	int num;

	while(input = getchar() )
	{
		if(input == EOF)
		{
			break;
		}

		else if(input >= 48 && input <= 57)
		{
			num = input;

			putchar(num);
		}
		else
		{
			printf("\n");
		}
	}
}
