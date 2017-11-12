/* @@@@@@@@@@ PROGRAM FOR CALCULATING VOLUME OF SPHERE @@@@@@@@@@ */



#include<stdio.h>
#include<math.h>
void main()
{ 
float radius,volume;
printf("Enter radius of the sphere:\n");
scanf("%f",&radius);
volume=(1.3333)*(3.1428)*radius*radius*radius;
printf("\n Volume of sphere is:%.3f",volume);
}
/*
@@@@@@@@@@ OUTPUT @@@@@@@@@@


dell@dell-OptiPlex-7040:~$ gedit ashuVOSPH.c

dell@dell-OptiPlex-7040:~$ gcc ashuVOSPH.c

dell@dell-OptiPlex-7040:~$ ./a.out
Enter radius of the sphere:
6
Volume of sphere is:864.000
dell@dell-OptiPlex-7040:~$

*/


