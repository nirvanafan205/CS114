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
		scanf("%s", ptr[j]->name);
		//scanf("%s", ptr[j]->address);
		//scanf("%s", ptr[j]->city_state);
		//scanf("%d", &ptr[j]->zip);
	}

	for(int k = 0; k < 4; k++)
	{
		printf("%s", ptr[k]->name);
		//printf("%s", ptr[k]->address);
		//printf("%s", ptr[k]->city_state);
		//printf("%d\n", ptr[k]->zip);
	}
}
