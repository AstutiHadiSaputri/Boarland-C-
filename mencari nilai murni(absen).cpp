#include <stdio.h>
#include <conio.h>
#include <iostream.h>
main()
{
float tugas,absen,uts,uas,na;

cout<<"MASUKAN NILAI MAHASISWA"<<endl;
cout<<"***********************"<<endl;
cout<<"masukan nilai tugsa: ",cin>>tugas;
cout<<"masukan nilai absen: ",cin>>absen;
cout<<"masukan nilai uts  : ",cin>>uts;
cout<<"masukan nilai uas  : ",cin>>uas;

na=(0.1*tugas)+(0.2*absen)+(0.3*uts)+(0.4*uas);
cout<<"=========== HASIL AKHIR ==========="<<endl;
cout<<" Nilai Akhir Anda Adalah "<<na;



getch();
}