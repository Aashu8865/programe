/*########## PROGRAM FOR FACTORIAL USING FUNCTION ##########/*


#include<stdio.h>
void main()
{
  	int number,i;
  	long int fact=1;
 	printf("enter the number");
 	scanf("%d",&number);
 	for(i=1;i<=number;i++)
        	 {
          	       	fact=i*fact;
         	 }
  	printf( "factorial of %d is %ld",number,fact);
}



/*########## OUTPUT ##########*/
comp@comp-OptiPlex-7040:~$ gcc ashu.c
comp@comp-OptiPlex-7040:~$ ./a.out
enter the number8
factorial of 8 is 40320comp@comp-OptiPlex-7040:~$  
/*
