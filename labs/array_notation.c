#include <stdio.h>
#include <stdlib.h>

char s1(char random[]);

char s2(char s2_input[], int index, char replacement[]);

int main()
{
	printf("Enter uppercase letters only with a minimum of 2 inputs \nand a maximum of 20 inputs, only uppercase letters \nThen Enter a replacement character \n");

	int index = 40;

	char random_generator[index];


	int s2_index;

	char s2_[s2_index];

	char change[1];

	random_generator[index] = s1(random_generator);

	printf("s1 = {\"");

	for(int i = 0; random_generator[i] != '\0'; i++)
	{
		putchar(random_generator[i]);
	}

	printf("\"}\n");

	s2(s2_, s2_index, change);

	printf("\ns2 = {\"");

	for(int a = 0; s2_[a] != '\0'; ++a)
	{
		putchar(s2_[a]);
	}

	printf("\"}\n");

	printf("\nc = {\"");

	for(int b = 0; change[b] != '\0'; ++b)
	{
		putchar(change[b]);
	}

	printf("\"}\n");
}

char s1(char random[])
{
	int limit = 0;

	char letter_[40];

	char characters;

	while(characters = 'A' + (rand() % 26))
	{
		if(limit == 40)
		{
			letter_[limit] = '\0';

			break;
		}

		letter_[limit] = characters;

		limit++;
	}

	for(int i = 0; i <= 40; i++)
	{
		random[i] = letter_[i];
	}
}

char s2(char s2_input[], int index, char replacement[])
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

	for(int t = 0; t <= count ; ++t)
	{
		if((count < 2)  || count > 20)
		{
			printf("\ninvalid size \n");

			break;
		}

		s2_input[t] = array[t];	
	}


	char choice[1] = "1";

	char input_;

	int count_ = 0;

	while(input_ = getchar() )
	{
		if(input_ == '\n')
		{
			choice[count_] = '\0';

			break;
		}

		choice[count_] = input_;

		count_++;
	}

	for(int u = 0; u <= 1; ++u)
	{
		replacement[u] = choice[u];
	}
}
