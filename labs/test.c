#include <stdio.h>

int main()
{
	char input;
	int num;
	int num_2;
	while(input = getchar())
	{
		int ascii = (int)input;

		if(input == EOF || input == 32) /* 32 = space, it breaks from the loop once ascii is spacebar */
		{
			break;
		}

		else if(ascii >= 48 && ascii <= 57)
		{
			num = (ascii - 48) + num * 10;
		}

	}
	printf("%d ", num); /* space added for next number */

	while(input = getchar() )
	{
		/* int ascii_ = (int)input; ---> adding this would break the code, adding millions to num and num_2 */

		if(input == EOF || input == 32)
		{
			break;
		}

		else if(input >= 48 && input <= 57)
		{
			printf("why does this work without adding millions to num");

			/* num_2 = (ascii - 48) + num_2 * 10;  would also add millions to num and num_2 */ 
		}
	}
}
