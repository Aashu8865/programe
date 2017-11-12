/* @@@@@@@@@@ PROGRAM FOR CALCULATING AREA OF TRIANGLE @@@@@@@@@@ */



#include<stdio.h>

void main()

{

int height, base;

float ans;

printf("Enter height and base");

scanf("%d%d", &height, &base);

ans=(0.5)*height*base;

printf("Area of triangle is %f",ans);

}


/*
@@@@@@@@@@ OUTPUT @@@@@@@@@@


dell@dell-OptiPlex-7040:~$ gedit ashuAOT.c

dell@dell-OptiPlex-7040:~$ gcc ashuAOT.c

dell@dell-OptiPlex-7040:~$ ./a.out

Enter height and base 12 5

Area of triangle is 30.000000


 
dell@dell-OptiPlex-7040:~$
*/
