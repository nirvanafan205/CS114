#include <stdio.h>


int main()
{
	char input;

	while(input = getchar() )
	{
		int ascii = (int)input;

		if(input == EOF)
		{
			break;
		}
		
		else if(ascii >= 48 && ascii <= 57)
		{
			int num = ascii;

			num = (2 * ascii) - num;


			putchar(num);

		}

		else
		{
			printf("\n");
		}
	}
}
