#include<stdio h.>
#include<conio.h>
#include<iostream.h>
main()
{
char kode,buku[20],bns,beli,lagi,yt;
float totbay,jumbel,totbel,potongan,harga:
clrscr();
cout<<"INPUT KODE BUKU[1..3]:";cin>>
kode=getch();
cout<<'\n';
switch(kode)
   {
   case'A';
   case'a';
   cout<<"Alat Olah Raga";
   break;
   case'B';
   case'b';
   cout<<"Alat elektronik";
   case'c';
   case'c';
   cout<<"alat masak";
   break;

default;
cout<<"Anda Salah Memasukan Kode";
}
cout<<'\n';
cout<<"\nlngin pilih lagi[Y/T]:";
lagi=getche();
if(lagi=='Y'|| lagi=='Y')
goto atas;
getch();
}

