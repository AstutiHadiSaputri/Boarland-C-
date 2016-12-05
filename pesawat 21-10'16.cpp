#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <windows.h>
main( )
{
   {
    system ("color 3");
      cout<<"\t\tNama : Mr.Gembull"<<endl;
      cout<<"\t\tNIM : 12131xxx"<<endl;
      cout<<"\t\t   12.1A.05"<<endl;

      }
       char kelas=0, ulang;
   char napes [50];
   long harga, total, bayar, kembali;
   float jumlah;
   awal :
   puts("\t\t    Program tiket pesawat");
   puts("\t\t      Jakarta - Malaysia");
   puts("\t\t---------------------------");
   cout<<"\t   Masukkan Kode Pesawat [MPT/GRD/BTV] : ";cin>>napes;
   cout<<"\t\tkelas pesawat : "<<endl;
   cout<<"\t\t\t1. Executive "<<endl;
   cout<<"\t\t\t2. Bisnis "<<endl;
   cout<<"\t\t\t3. Ekonomi "<<endl;
   cout<<"\t\tpilih kelas [1/2/3] : "; cin>>kelas;

   if (strcmp(napes,"MPT")==0 ||strcmp(napes, "mpt")==0)
   {
    strcpy(napes, "MERPATI");
       if (kelas=='1')harga=1500000;
       else if (kelas=='2')harga=900000;
       else harga=700000;
         }
   else if (strcmp(napes,"GRD")==0 ||strcmp(napes, "grd")==0)
   {
    strcpy(napes, "GARUDA");
       if (kelas=='1')harga=1200000;
       else if (kelas=='2')harga=800000;
       else harga=400000;


   }
   else if (strcmp(napes,"BTV")==0 ||strcmp(napes, "btv")==0)
   {
    strcpy(napes, "BATAVIA");
       if (kelas=='1')harga=1000000;
       else if (kelas=='2')harga=700000;
       else harga=300000;

   }

   clrscr();
   puts("\t\t    Program tiket pesawat");
   puts("\t\t      Jakarta - Malaysia");
   puts("\t\t---------------------------");
   cout<<"\t\tNama pesawat\t: "<<napes<<endl;
   cout<<"\t\tHarga Tiket\t: "<<harga<<endl;
   cout<<"\t\tMasukkan jumlah tiket\t: "; cin>>jumlah;
   total=harga*jumlah;
   cout<<"\t\tTotal yang harus dibayar: "<<total<<endl;
   cout<<"\t\tUang pembayaran \t: "; cin>>bayar;
   kembali=bayar-total;
   cout<<"\t\tSisa kembalian \t\t: "<<kembali<<endl<<endl<<endl;

   puts("\t\tThis Program Created by Dimas Bima Putra \n");
   puts("\t\t        My NIM : 12131858 \n");
   puts("\t\t             12.1A.05 \n");
   cout<<"\t\t     INGIN INPUT LAGI? [Y/N] :"; cin>>ulang;

   if(ulang=='Y' || ulang=='y')
   goto awal;
   else
   getch();
}