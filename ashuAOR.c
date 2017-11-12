/*@@@@@@@@@@ PROGRAM FOR CALCULATING AREA OF RECTANGLE @@@@@@@@@@ */
#include<stdio.h>

void main()

{
  
float l,b,area;
  
printf("Enter the value of length:");
  
scanf("%f",&l);

  
printf("Enter the value of breadth:");
  
scanf("%f",&b);

  
area=l*b;
  
  
printf("Area of rectangle:%f\n",area);

}


/*

$$$$$$$$$$ OUTPUT $$$$$$$$$$


dell@dell-OptiPlex-7040:~$ gedit ashuAOR.c

dell@dell-OptiPlex-7040:~$ gcc ashuAOR.c

dell@dell-OptiPlex-7040:~$ ./a.out

Enter the value of length:
5   

Enter the value of breadth:
7

Area of rectangle:35.000000



dell@dell-OptiPlex-7040:~$
*/
