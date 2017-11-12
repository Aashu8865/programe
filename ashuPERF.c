/* @@@@@@@@@@ PROGRAM FOR PERFECT NUMBER @@@@@@@@@@ */




#include<stdio.h>

int main()

{

int n,i=1,sum=0;

printf("Enter a number:");

scanf("%d",&n);
while(i<n)

{

if(n% i==0)

sum=sum+i;

i++;

}

if(sum==n)

printf("%d is a perfect number",i);

else

printf("%d is not a perfect number",i);

return(0);

}


/* 
@@@@@@@@@@ OUTPUT @@@@@@@@@@
dell@dell-OptiPlex-7040:~$ gedit ashuPERF.c



dell@dell-OptiPlex-7040:~$ gcc ashuPERF.c

dell@dell-OptiPlex-7040:~$ ./a.out

Enter a number:25
25 is not a perfect number

dell@dell-OptiPlex-7040:~$ ./a.out

Enter a number:28
28 is a perfect number

dell@dell-OptiPlex-7040:~$ 


*/
