#include <stdio.h>
#include <stdlib.h>
#include "Functions.h"

int main(int argc, char *argv[])
{       
	FILE *ifp, *ofp; 
	int n = 0;
	DP info[MAX];                           /* pointers to structs array */

	if (argc != 3) 
	{                        /* checks for amount */
		printf("Error: usage: ./Functions <input file> <output file>\n");
		return 1;
	}

	if ((ifp = fopen(argv[1], "r")) == NULL) 
	{
		printf("Error: cannot open input file.\n");
		return 2;
	}

	if ((ofp = fopen(argv[2], "w")) == NULL) 
	{
		printf("Error: cannot open output file.\n");
		return 3;
	}       

	if (load(info, ifp, &n) == 1) 
	{         /* read data from file */
		printf("Error: not enough memory.\n");
		return 4;                       /* quit if malloc fails */
	}

	if (n == 0)                     
		return 0;                       /* quit if file is empty */

	sort(info, 0, n-1);                     
	write(info, ofp, n);                    
	free_(info, n);                         
	fclose(ifp);                            
	fclose(ofp);

	return 0;
}
