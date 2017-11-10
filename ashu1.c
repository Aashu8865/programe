/* ########## PROGRAM FOR FACTORIAL OF NUMBER ##########*/


#include <stdio.h>
int main()
{
	int fact = 1, number,i;
	printf("enter the number : ");
	scanf("%d", &number);
	for(i = 1 ; i <= number; i++)
	{
		fact = fact * i;
	}
	printf("factorial of %d is %d" , number, fact);
	return 0;
}





/*########## OUTPUT ##########*/
comp@comp-OptiPlex-7040:~$ gcc ashu1.c
comp@comp-OptiPlex-7040:~$ ./a.out
enter the number : 5
factorial of 5 is 120comp@comp-OptiPlex-7040:~$ 
/*
