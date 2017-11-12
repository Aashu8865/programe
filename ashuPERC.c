/* @@@@@@@@@@ PROGRAM FOR CALCULATING PERCENTAGE @@@@@@@@@@ */
#include<stdio.h>

void main()

{
 
int s1,s2,s3,s4,s5,sum,total=500;
 
float per;
 
printf("\nEnter marks of 5 subjects:");
 
scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
 
sum=s1+s2+s3+s4+s5;
 
printf("\nsum:%d",sum);

per=(sum*100)/500;

printf("\nPercentage:%f",per);

}






/*
@@@@@@@@@@ OUTPUT @@@@@@@@@@


dell@dell-OptiPlex-7040:~$ gedit ashuPERC.c

dell@dell-OptiPlex-7040:~$ gcc ashuPERC.c

dell@dell-OptiPlex-7040:~$ ./a.out

Enter marks of 5 subjects: 80 73 72 92 73
Percentage:78.00
dell@dell-OptiPlex-7040:~$
*/

