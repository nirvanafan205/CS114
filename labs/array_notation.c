#include <stdio.h>

#include <stdlib.h>

char s1(char random[]);

char s2(char s2_input[], int index);

char strfilter(char random[], char s2_input[], char replacement);

int main()
{
	printf("Enter uppercase letters only with a minimum of 2 inputs \nand a maximum of 20 inputs, only uppercase letters \nThen Enter a replacement character \n");

	int index = 40;

	char random_generator[index];

	int s2_index = 21;

	char s2_[s2_index];

	random_generator[index] = s1(random_generator); /* random s1 made */

	printf("\ns1 = {\"");

	for(int i = 0; random_generator[i] != '\0'; i++)
	{
		putchar(random_generator[i]);
	}

	printf("\"}\n");

	s2_[s2_index] = s2(s2_, s2_index); /* user input of what to search is made */

	if(s2_[1] == '\0')
	{
		printf("invalid size");

		exit(0);
	}

	printf("\ns2 = {\"");

	for(int a = 0; s2_[a] != '\0'; ++a)
	{
		putchar(s2_[a]);
	}

	printf("\"}\n");

	char replacement;

	replacement = getchar(); /* user replacement character */

	printf("\nc = {\"");

	putchar(replacement);

	printf("\"}\n");

	char filter[index];

	filter[index] = strfilter(random_generator, s2_, replacement); /* filters what the user wants */

	printf("\nfiltered s1 = {\"");

	for(int f = 0; random_generator[f] != '\0'; ++f)
	{
		putchar(random_generator[f]);

	}

	printf("\"}\n");
}

char s1(char random[])
{
	int limit = 0;

	char letter_[40];

	char characters;

	while(characters = 'A' + (rand() % 26)) /* random generatro */
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

char s2(char s2_input[], int index)
{
	char array[21] = "123456789012345678901"; /* populated array to make sure no random memory is made */

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

			exit(0);
		}

		array[count] = input;

		count++;
	}

	index = count;

	for(int t = 0; t <= count ; ++t)
	{
		s2_input[t] = array[t];	
	}
}

char strfilter(char random[], char s2_input[], char replacement) /* replacement function */
{
	for(int vim = 0; s2_input[vim] != '\0'; ++vim)
	{
		for(int git = 0; random[git] != '\0'; ++git)
		{
			if(random[git] == s2_input[vim])
			{
				random[git] = replacement;
			}
		}
	}	
}
