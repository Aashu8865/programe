#include<stdio.h>
#include<conio.h>
#include<string.h>
  void main()
{
  char str[20],str1[20];
  int ch,i,j;
  clrscr();
  do
{
  printf("\n****MENU****");
  printf("\n1:Find Length");
  printf("\n2:Copy the Strings");
  printf("\n3:Compare the Strings");
  printf("\n4:Concatenate the Strings");
  printf("\n5:Exit");
  printf("\nEnter your choice: ");
  scanf("%d",&ch);

  switch(ch)
{
  case 1:
    printf("\nEnter the string: ");
    scanf("%s",&str);
    i=strlen(str);
    printf("\nThe Length of given string is: %d",i);
    break;

  case 2:
    printf("\nEnter the first string: ");
    scanf("%s",&str);
    printf("\nEnter the second string: ");
    scanf("%s",&str1);
    strcpy(str,str1);
    printf("\nThe Copied string is: %s",str);
    break;

  case 3:
    printf("\nEnter the first string: ");
    scanf("%s",&str);
    printf("\nEnter the second string: ");
    scanf("%s",&str1);
    j=strcmp(str,str1);
    if(j==0)
  {
    printf("\nThe string is same");
  }
    else
  {
    printf("\nThe string is not same");
  }
    break;

  case 4:
    printf("\nEnter the first string: ");
    scanf("%s",&str);
    printf("\nEnter the second string: ");
    scanf("%s",&str1);
    strcat(str,str1);
    printf("\nThe Concatenated string is: %s",str);
    break;

  case 5:
    exit(0);
    break;
}
}
  while(ch!=5);
  getch();
}

/*OUTPUT:
####MENU#####
1:Find Length
2:Copy the Strings
3:Compare the Strings
4:Concatenate the Strings
5:Exit/Enter your choice: 1

Enter the string: VINIT

The Length of given string is: 5

****MENU****
1:Find Length
2:Copy the Strings
3:Compare the Strings
4:Concatenate the Strings
5:Exit
Enter your choice: 2

Enter the first string: VINIT
Enter the second string: JAIN

The Copied string is: JAIN

****MENU****
1:Find Length
2:Copy the Strings
3:Compare the Strings
4:Concatenate the Strings
5:Exit
Enter your choice: 3

Enter the first string: VINIT
Enter the second string: VINIT

The string is same

****MENU****
1:Find Length
2:Copy the Strings
3:Compare the Strings
4:Concatenate the Strings
5:Exit
Enter your choice: 4

Enter the first string: VINIT
Enter the second string: JAIN

The Concatenated string is: VINIT JAIN

****MENU****
1:Find Length
2:Copy the Strings
3:Compare the Strings
4:Concatenate the Strings
5:Exit
Enter your choice: 5
*/
