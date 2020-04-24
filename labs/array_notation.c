#include <stdio.h>
#include <stdlib.h>

char s1(char random[] );

int main()
{
    char random_string[40];

    char helper[40] = s1(random_string[40]);
}

char s1(char random[])
{
    int index = 0;

    char letter_[40];

    char characters;


    while(characters = 'A' + (rand() % 26))
    {
        if(index == 40)
        {
            break;
        }

        letter_[index] = characters;

        index++;
    }

    for(int i = 0; i <= 40; i++)
    {
        putchar(letter_[i]);
    }
}
