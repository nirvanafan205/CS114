#include <stdio.h>

int main()
{
	char input;
	int num;

	while(input = getchar() )
	{
		int ascii = (int)input;
		if(input == EOF)
		{
			break;
		}

		else if(ascii >= 48 && ascii <= 57)
		{
			num = (2 * ascii) - num;

			putchar(num);
		}

	}

	printf("%d", num);
}
