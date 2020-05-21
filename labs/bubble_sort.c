#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

struct numbers
{
	int data;
};

int main()
{
	struct numbers **ptr = malloc(5 *sizeof(struct numbers *)); /* array of pointers to structures size of 5 */

	for(int i = 0; i < 5; i++)
	{
		ptr[i] = malloc(sizeof(struct numbers)); /* allocating */
	}

	for(int j = 0; j < 5; j++)
	{
		scanf("%d", &ptr[j]->data); /* adding value with i/o redirection */
	}

	int n = 5;

	sort(ptr, n);
}
