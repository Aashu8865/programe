#include <stdio.h>
int main()
{
    double n1, n2, n3;

    printf("Enter three different numbers: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    if( n1>=n2 && n1>=n3 )
        printf("%.2f is the largest number.", n1);

    if( n2>=n1 && n2>=n3 )
        printf("%.2f is the largest number.", n2);

    if( n3>=n1 && n3>=n2 )
        printf("%.2f is the largest number.", n3);

    return 0;
}






//*************OUTPUT**********
comp@comp-OptiPlex-7040:~$ gcc 3no.c
comp@comp-OptiPlex-7040:~$ ./a.out
Enter three different numbers: 4
565
6
565.00 is the largest number.comp@comp-OptiPlex-7040:~$ 


