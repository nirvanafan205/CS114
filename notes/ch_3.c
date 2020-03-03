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
 
 */
