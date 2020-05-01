#include <stdio.h>

char s2(char take_in[]);

int main()
{
	int s2_index = 20;

	char s2_[s2_index];

	s2_[s2_index] = s2(s2_);

	printf("s2 = {\"");

	for(int j = 0; j <= s2_index; j++)
	{
		printf("%c", s2_[j]);
	}

	printf("\"}\n");
}

char s2(char take_in[])
{
	char input;

	int count = 0;

	char s2[20];

	int check;

	while(input = getchar() )
	{
		if(input < 65 || input > 90)
		{
			break;
		}
		else if(count == 20)
		{
			break;
		}

		s2[count] = input;

		++count;
	}

	for(int b = 0; b <= count; b++)
	{
		take_in[b] = s2[b];
	}
}
