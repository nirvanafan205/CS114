#include <stdio.h>

addition(int num,char op, int num_2);

modulo(int num,char op, int num_2);

subtraction(int num,char op, int num_2);

division(int num,char op, int num_2);

multiplication(int num,char op, int num_2);

int main()
{
	char input, op;
	int num,num_2;

	while(input = getchar())
	{
		if(input == EOF || input == 32) 
		{
			break;
		}

		else if(input == 45)
		{
			printf("no negatives");

			exit(0);
		}

		else if(input >= 48 && input <= 57)
		{
			num = (input - 48) + num * 10;
		}
	}

	while(input = getchar() )
	{
		if(input == EOF || input == 32)
		{
			break;
		}

		switch(input)
		{
			case 37:
				op = 37;
				break;

			case 42:
				op = 42;
				break;

			case 43:
				op = 43;
				break;

			case 45:
				op = 45;
				break;

			case 47:
				op = 47;
				break;

			default:
				printf("input error");

				exit(0);
		}
	}

	while(input = getchar() )
	{
		if(input == EOF || input == 32)
		{
			break;
		}

		else if(input == 45)
		{
			printf("no negatives");
			exit(0);
			break;
		}

		else if(op == 47 && input == 48)
		{
			printf("no dividing by 0");
			exit(0);
		}

		else if(input >= 48 && input <= 57)
		{
			num_2 = (input - 48) + num_2 * 10;
		}
	}

	printf("%d %c %d", num, op, num_2);
	printf(" = ");

	if(op == 37)
	{
		num = modulo(num,op,num_2);

		printf("%d ", num);
	}

	else if(op == 42)
	{
		num = multiplication(num,op,num_2);

		printf("%d ",num);
	}

	else if(op == 43)
	{
		num = addition(num, op, num_2);

		printf("%d ", num);
	}

	else if(op == 45)
	{
		num = subtraction(num, op, num_2);

		printf("%d ", num);
	}

	else if(op == 47)
	{
		num = division(num,op,num_2);

		printf("%d ", num);
	}
}

addition(int num,char op, int num_2)
{
	return num + num_2;
}

modulo(int num,char op, int num_2)
{
	return num % num_2;
}

subtraction(int num,char op, int num_2)
{
	return num - num_2;
}

division(int num,char op, int num_2)
{
	return num / num_2;
}

multiplication(int num,char op, int num_2)
{
	return num * num_2;
}
