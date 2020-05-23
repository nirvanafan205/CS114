#include <stdio.h>
#include <stdlib.h>
#include "other.h"

int main()
{
	struct numbers **ptr = malloc(4 *sizeof(struct numbers *)); /* array of pointers to structures size of 5 */

	for(int i = 0; i < 4; i++)
	{
		ptr[i] = malloc(sizeof(struct numbers)); /* allocating */
	}

	for(int j = 0; j < 4; j++)
	{
		char temp_first[10];
		char temp_last[10];


		scanf("%s", temp_first);
		ptr[j]->name = temp_first;

		scanf("%s", temp_last);
		ptr[j]->name = temp_last;

		//scanf("%s", ptr[j]->address);
		//scanf("%s", ptr[j]->city_state);
		//scanf("%d", &ptr[j]->zip);
	}

	for(int k = 0; k < 4; k++)
	{
		printf("%s \n", ptr[k]->name);
		//printf("%s", ptr[k]->address);
		//printf("%s", ptr[k]->city_state);
		//printf("%d\n", ptr[k]->zip);
	}
}
