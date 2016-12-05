#include <iostream.h> //digunakan untuk menampilkan perintah (cin dan cout)\\
#include <stdio.h> //digunakan untuk menampilkan perintah (gets)\\
#include <string.h> //digunakan untuk menampilkan perintah (strcpy)\\
#include <conio.h> //digunakan untuk menampilkan perintah (getch,clrscr,getche dan goto)\\


main()
{
awal:
clrscr(); //membersihkan layar sebelumnya\\
char nama[20],kend[10]; //variabel\\
int kode,harga,pass,user; //variabel//


int pass;
int user;

int password=1234;
int userr=001;

cout<<"\nMasukkan Kode Login";
cout<<"\n=================================";
cout<<"\nUser = ";cin>>user; //tulusan yang akan di tampilkan//memasukkan nilai yang ada di variabel\\
cout<<"\nPass = ";cin>>pass; //tulisan yang akan di tampilkan //memasukkan nilai yang terdapat pada variabel\\

//proses\\
if(pass==password&&user==userr)
{
cout<<"sukses";
}
else
{
cout<<"Gagal";
}

clrscr(); //perintah untuk menghapus layar sebelumnya\\
//inputan \\
cout<<"\nPenitipan Kendaraan"; //tulisan yang akan di tampilkan \\
cout<<"\n=================================";
cout<<"\nNama Penitip Kendaraan : ";gets(nama); //tulisan yang di tampilkan\\fungsi gets inputan yang bisa membaca spasi\\
cout<<"\nPilih Jenis Kendaraan  : "; //menampilkan tulisan\\
cout<<"\n	1.Mobil";                //tulisan yang akan tampil\\
cout<<"\n	2.Motor";                //tulisan yang akan tampil\\
cout<<"\n=================================";
cout<<"\nMasukan Pilihan        : ";cin>>kode;  //tilisan yang di tampilkan\\ \\serta memasukkan nilai yang di simpan dlm variabel\\


//proses\\
if(kode==1)

{
strcpy(kend,"Mobil");
harga=5000;
}

else if(kode==2)
{
strcpy(kend,"Motor");
harga=3000;
}
else
cout<<"Salah Kode";

//outputan\\
clrscr(); //membersihkan perintah yang sebelumnya\\
cout<<"\nPenitipan Kendaraan"; //tulisan yang akan di tampilkan\\
cout<<"\n=================================";
cout<<"\nNama Penitip Kendaraan   : "<<nama; //tulisan yang akan di tampilkan
cout<<"\nKode                     : "<<kode; //menampilkan yang ada di prisees
cout<<"\nJenis Kendaraan          : "<<kend;  //menampilkan yang ada di prisees
cout<<"\nHarga Per Jam            : "<<harga;  //menampilkan yang ada di prisees


cout<<"\nINGIN INPUT LAGI Tekan [Y]";

char lagi;  //variabel\\
lagi=getche(); //digunakan untuk membaca sebuah karakter tanpa harus menekan tombol enter\\

if(lagi=='Y'||lagi=='y')
goto awal;   //memindahkan ke baris awal         \\

getch();  //digunakan untuk menahan tampilam\\
}

