#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Functions.h"

/*  reads data from file. allocates space for individual structures as
 * needed. assigns addressresses of structures to pointer array, and relevant data
 * to members. records number of structures created */

int load(DP *info, FILE *ifp, int *n)
{
	char buffer[81];

	while (fgets(buffer, 81, ifp) != NULL && *n < MAX) 
	{
		info[*n] = malloc(sizeof(info));
		if (!info[*n])                  /* return error if */
			return 1;               /* malloc fails */
		else 
		{
			strcpy(info[*n]->name, buffer);

			fgets(buffer, 81, ifp);

			strcpy(info[*n]->address, buffer);

			fgets(buffer, 81, ifp);

			strcpy(info[*n]->city_state, buffer);

			fgets(buffer, 81, ifp);

			info[*n]->zip = atoi(buffer);

			(*n)++;
		}
	}
}

/* rearranges structures held in pointer array in
 * order by zip code. */ 

void sort(DP *info, int left, int right)
{
	int i, last;

	if(left >= right)                      
		return;                         
	swap(info, left, (left + right) / 2);   

	last = left;                            

	for(i = left + 1; i <= right; i++)     
		if (info[i]->zip < info[left]->zip)
			swap(info, ++last, i);       

	swap(info, left, last);                

	sort(info, left, last - 1);

	sort(info, last + 1, right);
}

/* swap:  switches info[i] and info[j] */
void swap(DP *info, int i, int j)
{
	DP temp;

	temp = info[i];
	info[i] = info[j];
	info[j] = temp;  
}

/* output to file information of structures in pointer array */

void write(DP *info, FILE *ofp, int n)
{      
	for (int i = 0; i < n; i++) 
	{
		fprintf(ofp, "%s" "%s" "%s" "%d\n", info[i]->name, 
				info[i]->address, info[i]->city_state, info[i]->zip);
	}
}

/* free_ memory allocated to structures */
void free_(DP *info, int n)
{
	for (int i = 0; i < n; i++)
	{
		free_(info[i]);
	}
}
