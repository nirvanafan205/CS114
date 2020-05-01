#include <stdio.h>

int main()
{
    int input = 0;

    int count = 0;

    char s2[20];

    int check;

    while(input = getchar() != EOF)
    {
	    if(input < 65 || input > 90)
	    {
		    break;
	    }

            s2[count] = input;

            ++count;
    }

    for(int i = 0; i <= count; i++)
    {
       putchar(s2[i]);
    }

}
