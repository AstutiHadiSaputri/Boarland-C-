#include <stdio.h>
#include <conio.h>
#include <iostream.h>
main()
{                                                  

float a,b,c,d,e,f,x,y;
clrscr();
cout<<"\t\t\t\tRelasi Bahasa c++"<<endl;
cout<<"----------------------------------------------------------------------------"<<endl;

cout<<"masukan nilai X :";cin>>x;
cout<<"masukan nilai Y :";cin>>y;
x=7;
y=3;

a=x==y;
b=x!=y;
c=x>y;
d=x<y;
e=x>=y;
f=x<=y;


cout<<" \t\t\tHASIL PERBANDINGAN DARI "<<endl;
cout<<" \t\t\t*********************** "<<endl;

cout<<" Apakah nilai "<<x<<" == "<<y<<" = "<<a<<endl;
cout<<" Apakah nilai "<<x<<" != "<<y<<" = "<<b<<endl;
cout<<" Apakah nilai "<<x<<" > "<<y<<" = "<<c<<endl;
cout<<" Apakah nilai "<<x<<" < "<<y<<" = "<<d<<endl;
cout<<" Apakah nilai "<<x<<" =< "<<y<<" = "<<e<<endl;
cout<<" Apakah nilai "<<x<<" => "<<y<<" = "<<f<<endl;

getch();
}