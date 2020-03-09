/* Garcia, Matthew 
   Lab 2 poem

*/
#include <stdio.h>

int main()
{
	char input;
	while( input = getchar() ) 
	{
		if(input == EOF)
		{
			break;
		}
		else if(input == 32)
		{
			printf("\n");
		}
		else if(input >=33 && input <= 64)
		{
			printf("");
		}
		else if(input >= 9 && input <= 11)
		{
			printf("");
		}
		else
		{
		putchar(input);	
		}
	}
}
