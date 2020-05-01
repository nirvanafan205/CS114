#include <stdio.h>

int main()
{
    char input;

    int count = 0;

    char s2[20];


    int check;

    while(input = getchar())
    {
	    if(input == 65)
	    {
		    break;
	    }

            s2[count] = input;

            ++count;
    }

    for(int i = 0; i <= count; i++)
    {
        putchar( s2[i]);
    }

}
