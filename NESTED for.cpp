#include<stdio.h>
#include<conio.h>
main( )
{
int a, b;
clrscr( );
for(a = 1; a <= 20; a++)
{
printf("\n");
for(b = a; b <= 20; b++)
printf(" %d ",a);
}
getch();
}
