/* @@@@@@@@@@ PROGRAM FOR CALCULATING VOLUME OF CUBE @@@@@@@@@@*/

#include<stdio.h>
void main()
{
float a;
float volume;
printf("Enter size of any side of a cube:");
scanf("%f",&a);
volume=a*a*a;
printf("volume of cube is:%.3f",volume);
}




/*    
@@@@@@@@@@ OUTPUT @@@@@@@@@@ 


dell@dell-OptiPlex-7040:~$ gedit ashuVOCUBE.c

dell@dell-OptiPlex-7040:~$ gcc ashuVOCUBE.c

dell@dell-OptiPlex-7040:~$ ./a.out
Enter size of any side of a cube:6.00
volume of cube is:216.00
dell@dell-OptiPlex-7040:~$

*/
