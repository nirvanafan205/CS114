#include <stdio.h>

int main()
{
    char input;

    int count;

    char s2[20];

    count = 0;

    int check;

    while(input = getchar())
    {
        if(input >= 65 && input <= 90)
        {
            s2[count] = input;

            ++count;
        }
        else
        {
            break;
        }
    }

    for(int i = 0; i <= count; i++)
    {
        putchar( s2[i]);
    }

}
