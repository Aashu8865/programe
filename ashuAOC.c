/* $$$$$$$$$$ PROGRAM FOR CALCULATING AREA OF CIRCLE $$$$$$$$$$ */





#include<stdio.h>

#include<math.h>

#define PI 3.142

void main()

{

float  radius, area;

printf("Enter the radius of a circle:\n");

scanf("%f", &radius);

area=PI*radius*radius;

printf("Area of circle is %5.2f\n",area);

}





/*    
$$$$$$$$$$ OUTPUT $$$$$$$$$$ 


dell@dell-OptiPlex-7040:~$ gedit ashuAOC.c

dell@dell-OptiPlex-7040:~$ gcc ashuAOC.c

dell@dell-OptiPlex-7040:~$ ./a.out

Enter the radius of a circle:12

Area of circle is 452.45
dell@dell-OptiPlex-7040:~$

*/
