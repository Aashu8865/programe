/* @@@@@@@@@@ PROGRAM FOR CALCULATING AREA OF SPHERE @@@@@@@@@@  */



#include<stdio.h>

#include<math.h>


void main()

{ 
 
 
float radius,Surface_area;
 
printf("Enter radius of the sphere:\n");
 
scanf("%f",&radius);

 
Surface_area=4*(3.1428)*radius*radius;

printf("Surface_area of sphere is:%.3f",Surface_area);
}
/*  
@@@@@@@@@@  OUTPUT @@@@@@@@@@ 
dell@dell-OptiPlex-7040:~$ gedit ashuAOSPH.c

dell@dell-OptiPlex-7040:~$ gcc ashuAOSPH.c

dell@dell-OptiPlex-7040:~$ ./a.out

Enter radius of the sphere:

6

Surface_area of sphere is:432.000
 


dell@dell-OptiPlex-7040:~$ 

*/


