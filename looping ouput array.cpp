#include<conio.h>
#include<stdio.h>
#include<iostream.h>
#include<iomanip.h>

main()
{
	int i;
   char nama[5][20];
   float nilai1[5];
   float nilai2[5];
   float hasil[5];
for(i=1;i<=2;i++)
{
	cout<<"Data Ke - "<<i<<endl;
   cout<<"Nama Siswa : ";gets(nama[i]);
   cout<<"Nilai MidTest : ";cin>>nilai1[i];
   cout<<"Nilai Final : ";cin>>nilai2[i];
   cout<<"Hasil[i] = (nilai1[i]*0.40)+(nilai2[i]*0.60)";
   cout<<endl;
}
{
	cout<<"----------------------------------"<<endl;
   cout<<"No. Nama Siswa Nilai-nilai"<<endl;
   cout<<"Hasil"<<endl;
   cout<<"MidTest Final"<<endl;
   cout<<"Ujian"<<endl;
   cout<<"----------------------------------"<<endl;
}
for(i=1;i<=2;i++)
{
	cout<<setiosflags(ios::left)<<setw(4)<<i;
   cout<<setiosflags(ios::left)<<setw(10)<<nama[i]<<endl;
   cout<<setprecision(2)<<" "<<nilai1[i]<<endl;
   cout<<setprecision(2)<<" "<<nilai2[i]<<endl;
   cout<<setprecision(2)<<" "<<hasil[i]<<endl;
}
getch();
}

