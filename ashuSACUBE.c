/* @@@@@@@@@@ PROGRAM FOR CALCULATING SURFACE AREA OF CUBE @@@@@@@@@@ */

#include<stdio.h>
void main()
{
float a;
float volume;
printf("Enter size of any side of a cube:");
scanf("%f",&a);
surface_area=6*a*a;
printf("Surface area of cube is:%.3f",surface_area);
}




/*    
@@@@@@@@@@ OUTPUT @@@@@@@@@@


dell@dell-OptiPlex-7040:~$ gedit ashuSACUBE.c

dell@dell-OptiPlex-7040:~$ gcc ashuSACUBE.c

dell@dell-OptiPlex-7040:~$ ./a.out
Enter size of any side of a cube:3.2
Surface area of cube is:61.44
dell@dell-OptiPlex-7040:~$

*/


