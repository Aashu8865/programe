
ODD OR EVEN

#include<stdio.h>
main()
{
int n;
printf("Enter an integer\n");
scanf("%d",&n);
if(n%2==0)
printf("Even\n");
else
printf("odd\n");
return 0;
}

************output**************

comp@comp-OptiPlex-7040:~$ gcc ashu.c
comp@comp-OptiPlex-7040:~$ ./a.out
Enter an integer
45
odd
comp@comp-OptiPlex-7040:~$ 

