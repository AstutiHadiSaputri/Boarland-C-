#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <iomanip.h>

main()
{
char kelas,kode[5],nm_pesawat[10];
int harga_tiket=0,jumlah_tiket=0,total_bayar=0;

cout<<"\t\t\t PEROGRAM TIKET PESAWAT "<<endl;
cout<<"\t\t\t    JARTA - MALESIA "<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;
cout<<" Masukan Kode Pesawat [MPT/GRD/BTV]:";cin>>kode;
if(!strcmp(kode,"MPT")){
   if(kelas=='1'){
      strcpy(nm_pesawat,"Merpati");
      harga_tiket=1500000;}
   else if(kelas=='2'){
      strcpy(nm_pesawat,"Merpati");
      harga_tiket=900000;}
	else{
      strcpy(nm_pesawat,"Merpati");
      harga_tiket=500000;}
}
else if(!strcmp(kode,"GRD")){
   if(kelas=='1'){
      strcpy(nm_pesawat,"Garuda");
      harga_tiket=1200000;}
   else if(kelas=='2'){
      strcpy(nm_pesawat,"Garuda");
      harga_tiket=800000;}
   else
      {strcpy(nm_pesawat,"Garuda");
      harga_tiket=400000;}
   if(kelas=='1'){
      strcpy(nm_pesawat,"Batavia");
      harga_tiket=100000;}
   else if(kelas=='2'){
      strcpy(nm_pesawat,"Batavia");
      harga_tiket=700000;}
   else
      {strcpy(nm_pesawat,"Batavia");
      harga_tiket=300000;}
}
cout<<" Kode kelas [1/2/3]:";cin>>kelas;



cout<<"Nama pesawat :"<<nm_pesawat<<endl;
cout<<"Harga tiket  :"<<harga_tiket<<endl;
cout<<"jumlah tiket :";cin>>jumlah_tiket;
total_bayar=harga_tiket*jumlah_tiket;
cout<<"Total Bayar  :"<<total_bayar<<endl;
getch();
}
