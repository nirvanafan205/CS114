#include <stdio.h>

#define MAX 50
#define SLEN 40

struct information 
{
	char name[SLEN];
	char address[SLEN];
	char city_state[SLEN];
	int zip;
};

typedef struct information info;

typedef info *DP;

int load(DP *, FILE *, int *);

void sort(DP *, int, int);

void swap(DP *, int, int);

void write(DP *, FILE *, int);

void free_(DP *, int);
