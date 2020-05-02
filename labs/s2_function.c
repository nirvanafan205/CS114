#include <stdio.h>

char s2(char s2_input[], int index);

int main()
{
	int s2_index;

	char s2_[s2_index];

	s2(s2_, s2_index);

	for(int a = 0; s2_[a] != '\0'; ++a)
	{
		putchar(s2_[a]);
	}
}

char s2(char s2_input[], int index)
{
	char array[20] = "1234567890123456789";

	char input;

	int count = 0;

	int check = 0;

	while(input = getchar() )
	{
		if(input == '\n')
		{
			array[count] = '\0';
			break;
		}

		else if(input < 65 || input > 90)
		{
			printf("invalid input");

			array[count] = '\0';

			break;
		}

		array[count] = input;

		count++;
	}

	index = count;

	for(int i = 0; i <= count ; ++i)
	{
		if((count < 2)  || count > 20)
		{
			printf("\ninvalid size \n");

			break;
		}

		s2_input[i] = array[i];	
	}
}
