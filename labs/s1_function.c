#include <stdio.h>
#include <stdlib.h>

char s1(char random[] );

int main()
{

    int index = 40;

    char random_generator[index];

    random_generator[index] = s1(random_generator);

    printf("s1 = {\"");

    for(int i = 0; i <= index; i++)
    {
        printf("%c", random_generator[i]);

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
