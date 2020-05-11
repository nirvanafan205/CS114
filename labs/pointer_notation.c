#include <stdio.h>

#include <stdlib.h>

char s1(char *random);

char s2(char *s2_input, int index);

char strfilter(char *random, char *s2_input, char replacement);

int main()
{
    int s1_index = 41;

    char s1_random[s1_index];

    s1(s1_random);

    printf("\ns1 = ");
    puts(s1_random);

    int s2_index = 21;

    char s2_input[s2_index];

    s2(s2_input, s2_index);

    if(s2_input[1] == '\0')
    {
        printf("size too small");

        exit(0);
    }

    printf("\ns2 = ");
    puts(s2_input);

    char replacement = getchar();

    printf("\nc = ");

    putchar(replacement);

    printf("\n");

    int filter_index = 41;

   strfilter(s1_random, s2_input, replacement);

   printf("\ns1 filtered = ");
   puts(s1_random);
}

char s1(char *random)
{
    int limit = 0;

    char characters;

    while(characters = 'A' + (rand() % 26)) /* random generatro */
    {
        if(limit == 41)
        {
            *(random + 41 - 1) = '\0';

            break;
        }
        *(random + limit) = characters;

        limit++;
    }
}

char s2(char *s2_input, int index)
{
    char array[21] = "123456789012345678901"; /* populated array to make sure no random memory is made */

    char input;

    int count = 0;

    int check = 0;

    while(input = getchar() )
    {
        if(input == '\n')
        {
            *(s2_input + count) = '\0';

            break;
        }

        else if(input < 65 || input > 90)
        {
            printf("invalid input");

            exit(0);
        }

        *(s2_input + count) = input;

        count++;
    }

    index = count;
}

char strfilter(char *random, char *s2_input, char replacement) /* replacement function */
{
    while(*s2_input)
    {
        char *temp = random;

        while(*temp)
        {
            if(*temp == *s2_input)
                *temp = replacement;
            temp++;
        }
        s2_input++;
    }
}
