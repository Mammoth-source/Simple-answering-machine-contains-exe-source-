#include <stdio.h>
# include<conio.h>
void main()
{
char Name[200];
int age;
clrscr();
  printf("\n Hi");
  getch();
  printf("\n What is Your Name(Click enter to continue) ");
  getch();
  scanf("%s",Name);
  printf("%s",Name);
  printf("\n Enter Your age");
  scanf("%d",age);
  if( age < 18 )
    {
    cprintf("\n Welcome Kid!");
    }
    else{
    cprintf("\n Welcome!");
    }
    printf("\n Windows 10 ");
}