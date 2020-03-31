// Arrays and pointers 


/*
 
  One dimensional array
  	Multiple values of the same data type can be stored with one variable name
 
  Variable definition
  	Causes storage to be allocated for the variable
  	
  		Ex): int test[3];
 
  Variable declaration
  	Gives characteristics of the variable 
  		
  		Ex):  int test[]...
 

		Arrays
	
	Array initialization

	*	int test[3] = {85, 92, 70];
	
	Sizeof(test) is 6 if int takes 2 bytes

	There is no array bound checking in c
 
		* Test[3] = 12;  <--- doesn't work
		*
		*	int exam[4] = {0};
		*	^	will make all the numbers 0 if no other values are inputed
		

			Arrays
	
	*Passing arrays to functions

		#define MAX 3

		void fill(int []);

		void fill(int exam [])
		{
			for(int i = 0; i < MAX; i++)
			{
				printf("Enter SCore %d", i + 1);

				scanf("%d", &exam[i]);
			}
		}		


	* It's not possible to pass a copy of an array as a parameter
	* Arrays are passed by reference with some exceptions
	




				Pointers

		*Adress of a memory(variable is a number associated with a memory byte
		
		*To access the address of a variable:
			Use & operator
			Use pointer variable
		*Pointer variable contains the addrsss of a variable 
		*Pointer variable "points to" the memory location (address)
			when dealing with pointers, think of the address of it


		* Pointer variable declaration
		
		* <data type> *<variable name>;
		
		Ex)
			int i = 3;

			int *ip = &i;			ip is a pointer type int 		gives it's own address and the value is the 120. Memory location of i

			Char *cp;			cp is a pointer of type char


		*Pointer arithmetic

		char * cp;	
		'J'	'o'	'h'	'n'
		10	11	12	13
		cp	cp+1 	cp+2	cp+3

		cp+1 is sizeof(char) + cp
		cp+1 is same as cp++ same as ++cp

		int *ip;

		25		-543
		10	11	12	13
		ip		ip+1 

		ip+1 is sizeof(int) + ip
		ip+1 is same as ip++ same as ++ip



		*Dereferencing a pointer variable

			* is the deference operator
			* using this operator to get the value pointed by a pointer
		
		Ex)
			int i = 3;

			int *ip = &i;

			i	ip			i	3
			3	120			&i	120
			120	286			ip	120
							&ip	289
							*ip	3

		NULL pointer

		*  int *ip = NULL;	means ip doesn't point to a legal memory address
		

		An array as a pointer
		
							   0	1	2
		*int test[3];			test ----> 
								test+1	test+2

		*test evaluates to the address of the first cell in the array
		*test + 1 is the address of the 2nd cell and so onn
		* *test and test[0] refer to the content of the first cell in the array
		*  *(test + 1) is same as test[1]
		*   *(test +2) is the same as test[2] test = test + 1;
		

		Value parameter
			* is a parameter that is passed by value (copy)
		
		Variable pararmeter
			* Is a parameter that is passed by reference (pointer)
		
		Passing parameters to functions 
			* pass by value (copy)
			* pass by reference (pointer)
	

		Pass by value
			*Function receives a copy of a value parameter
			* The original parameter is not changed by the function
		
		Pass by reference
			*Function is able to change the value of variable parameter,
			because the address of the variable parameter is known to the function

		In C all parameters are passed by value
		However pass by reference can be simiulated 
		by passing the address of the variable as an actual parameters

		*Variable address can not be changed by the function
		* Variable content can be changed by the function
		* Formal variable need to be declard as a pointer


 */

#include <stdio.h>

 int main( void)
{
	char c, 
	     *ptr_c = &c;
	c = 'Q';

	printf("The value of c is %c. \n", c);
	printf("ptr_c points to %c. \n", *ptr_c);
	printf("The character %c is stored in hex %x.\n", c, ptr_c);
	

