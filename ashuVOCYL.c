/* @@@@@@@@@@ PROGRAM FOR CALCULATING VOLUME OF CYLINDER@@@@@@@@@@ */

#include<stdio.h>
void main()
{
float vol,pie=3.142;
float r,h;
printf("Enter the value of radius:");
scanf("%f",&r);
printf("Enter the value of height:");
scanf("%f",&h);
vol=pie*r*r*h;
printf("Volume of cylinder is:%3.2f",vol);
}




/*    
@@@@@@@@@@ OUTPUT @@@@@@@@@@ 


dell@dell-OptiPlex-7040:~$ gedit ashuVOCYL.c

dell@dell-OptiPlex-7040:~$ gcc ashuVOCYL.c

dell@dell-OptiPlex-7040:~$ ./a.out
Enter the value of radius:2.23
Enter the value of height:6.56
Volume of cylinder is:102.49
dell@dell-OptiPlex-7040:~$

*/
