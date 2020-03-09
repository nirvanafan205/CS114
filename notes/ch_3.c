// Data types

/*
 - The size of a data type is hardware dependent

 - sizeof() operator gives the number of bytes associated with a data type or a variable

 - Overflow/underflow

 *byte = 8 bits*


 	Data type		Conversion satisfaction string
-----------------------------------------------------------------

	char			%c

	short			%h

	unsigned short		%hu

	int			%d

	unsinged int		%du

	long			%l

	unsigned long 		%lu

	float 			%f  %e  %E  %g  %G 

	double			%lf  %le

	long double 		%lf

-----------------------------------------------------------------

Formated output|
----------------

	%5d		minimum 5 spaces

	%7.2f		minimum 7 spaces
			2 digits for precision
			including decimal point
	
	float f = 58.7769

	int i = 5469;

	printf("%5d\n");

	printf("%5.2f\n"f);


	- constants are in 	limit.h
	- forced type conversion:
		type cast: changes the value of a variable to a different data type TEMPORARLY

	int x;
	(float) x;
 
 ----------------------------------------------------------------------------------------------------

 Automatic type conversion:|
 ---------------------------

 1) Result of relational and logical operations are int (0 or 1)
 2) char and short are "promoted" to int.
 3) formixed types convert values to a "domainating type"

int i;
short s;
long l;
float f;

f = s * l + i;


	long double		most dominant

	double

	float

	unsigned long

	long

	unsigned int

	int			least dominant
----------------------------------------------------------------------------------------------------
Functions|
--------------------------------------------------------------------------------------------------------------

		- A modual program is composed of many functions

	#inlcude <stdio.h>

	float calcAverage(float num1, float num2, float num3);

	int main(void)
{

	float num1, num2, num3, average;

	printf("Enter 3 numbers:");

	scanf("%f %f %f", &num1, &num2, &num3);

	average = calcAverage(num1,num2,num3);

	printf("Average = %6.2f\n", average);

	return 0;
}

	float calcAverage(float num1, float num2, float num3)
{
	return (num1 + num2 + num3) / 3;
}

- scope of a variable is the part of the program
in which the variable can be referenced

	Local Variable:
	- is a variable declared inside of ablock
	- can only be referenced inside of its block

	Global Variable:
	-is a variable declared outtside all functions
	- can be referenced from its point of declaration to the end of the program
	-By default its initialized to zero

	* Try to avoid using global variables in programs because of "side effect" problems
	
---------------------------------------------------------------------------------------------------------------
	
	
mathematical functions

	#include <math.h>

floor(1.8) -> 1.0	exp(x)		pow(x,y)	x ^y

floor(4.1) -> 4.0	log(x)		sqrt(x)
			log10(x)
					ceil(3.8) -> 4.0
					ceil(8.1) -> 9.0
tabs(-4.1) -> 4.1	


character manipulation functions/ macros

		#include <ctype.h>
		
		islower(ch)		isupper(ch)		isspace(ch)
		
		islower('a') -> 1	isupper('T') -> 1	isspace('\t') -> 1

		islower('5') -> 0	isupper('$') -> 0	isspace('\n') -> 1

		isalpha(ch)		isdigit(ch)

		isalpha('b') -> 1	isdigit('6') -> 1	toupper(ch)

		isalpha('S') -> 1	isdigit('=') -> 0	toupper('d') -> 'D'	toupper('$') -> '$'

		isalpha(' ') -> 0				toupper('U') -> 'U'

 */
