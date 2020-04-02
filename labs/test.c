#include <stdio.h>


int main()
{
<<<<<<< HEAD
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
=======
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
                        int num = ascii - 48;

                        putchar(num);
                }

                else
                {
                        printf("\n");
                }
        }
>>>>>>> dcc65d655ffeb4b658a637df8f1910134023ddb4
}

