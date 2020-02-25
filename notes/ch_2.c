#include <stdio.h>

int main()
{
	int a = 5;
	int b = 2;
	int c = -3;

	a % b >= 1 || c > 5 && !a

		5 % s >= 1 || -3 > 5 && ! 5
}

//if statement
if(<expression>)
{
	<statement>;
}



// if_else statement
if(<expression>)
{
	<statement>
}

else
{
	<statement>
}



// nested if_else if statment:
if(<expression>)
{
	<statement>;
}

else if(expression>)
{
	<statement>;
}

else
{
	<statment>;
	// if everthing fails, the else will be it's default
}



// switch statment:
switch (<expression>)
{
	// must be ints or chars

	case <c1>:
		<statement>;
		break;

	case <c2>:
		<statement>;
		break;

	case <c3>:
		<statement>;
		break;

	default:
		<statement>;
		break;
}


//while loop
while (<expression)
{
	<statement>;
}
n = 2;
while(n <= 10)
{
	printf("%d", n);
}


//for loop
for(initialization; <expression>; <update)
{
	<statement>;
}


for(int i = 0; i <= 10; i++)
{
	printf("%d", i);
}


//do_while loop:

do
{
	<statement>;
}
while(<expression);
}

/*
   continue statement:
   - causes a loop to stop its current iteration and being the next one

   break statement:
   - causes a loop to terminate and the program jumps to the state,ent following the loop.

   return statement:
   - terminates execution of a function

   exit(n) function
   - causes a program to terminate 
   exit(0) means normal termination
   */
