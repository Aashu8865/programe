
#include <stdio.h>
extern int x = 9;
int z = 10;
int main()
{
    
    auto int a = 32;
    register char b = 'G';
    extern int z;
    printf("Hello World!\n");

    printf("\nThis is the value of the auto "
           " integer 'a': %d\n",a);
    printf("\nThese are the values of the"
           " extern integers 'x' and 'z'"
           " respectively: %d and %d\n", x, z);
    printf("\nThis is the value of the "
           "register character 'b': %c\n",b);
    x = 2;
    z = 5;
    printf("\nThese are the modified values "
           "of the extern integers 'x' and "
           "'z' respectively: %d and %d\n",x,z);
    printf("\n'y' is a static variable and its "
           "value is NOT initialized to 5 after"
           " the first iteration! See for"
           " yourself :)\n");

    while (x > 0)
    {
        static int y = 5;
        y++;
        printf("The value of y is %d\n",y);
        x--;
    }

    
    printf("\nBye! See you soon. :)\n");

    return 0;
}







/* ###########Output:#############

Hello World!

This is the value of the auto  integer 'a': 32

These are the values of the extern integers 'x' and 'z' 
respectively: 9 and 10

This is the value of the register character 'b': G

These are the modified values of the extern integers 'x' 
and 'z' respectively: 2 and 5

'y' is a static variable and its value is NOT initialized 
to 5 after the first iteration! See for yourself :)
The value of y is 6
The value of y is 7
Bye! see you soon.
*/
