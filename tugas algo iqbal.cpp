#include <iostream>
using namespace std;


struct data{
char nim[20],nama[20],kelas[20];};
data batas[100];
int x,b,c,d;
void inputdata()
{    cout<<"\nJumlah Data Yang Akan diinput : ";
cin>>b;
   d=0;
   for(c=0;c<b;c++){d=d+1;
   cout<<"\nData ke-"<<d<<endl;
   cout<<"NIM  \t: ";cin>>batas[x].nim;
   cout<<"Nama \t: ";cin>>batas[x].nama;
   cout<<"Kelas\t: ";cin>>batas[x].kelas;
   x++;}}



void lihatdata()
{int i,j;
 cout<<"\n+++++++++++++++++++++++++++Menampilkan Data++++++++++++++++++++++++++++++++\n\n";
 cout<<"===============================================================================\n";
 cout<<"||\tNO\t||\tNIM\t||\tNama\t\t||\tKelas\t||\n";
 j=0;
 for(i=0;i<x;i++)
 {j=j+1;
  cout<<"*******************************************************************************\n";
  cout<<"||\t"<<j<<"\t||";
  cout<<batas[i].nim<< "\t\t||\t";
  cout<<batas[i].nama<<"\t\t||\t";
  cout<<batas[i].kelas<<"\t\t||\t";
  cout<<endl;
  }
  cout<<"**********************************************************************************";}

void hapusdata()
{int z,y;
 cout<<"Hapus data ke-";
 cin>>z;
 y=z-1;x--;
 for(int i=y;i<x;i++)
 {batas[i]=batas[i+1];}
 ;
 cout<<"\n\n\n\n\n\n\n\n\n++++++++++++++++++++++++++++++ Data ke-"<<x<<" Terhapus ++++++++++++++++++++++++++++++";
 ;
}

void editdata(){
int b,h;
cout<<"Masukan Data yang akan diedit : ";cin>>b;
h=b-1;
cout<<"NIM  \t: ";cin>>batas[h].nim;
cout<<"Nama \t: ";cin>>batas[h].nama;
cout<<"Kelas\t: ";cin>>batas[h].kelas;
lihatdata();
}


int main()
{     int pilih;
 char w;

  awal:
  cout<<"\n************************** PILIHAN MENU ***************************";
  cout<<"\n1. Masukkan data";
  cout<<"\n2. Hapus Data";
  cout<<"\n3. Lihat Data";
  cout<<"\n4. Edit Data";
  cout<<"\n5. Keluar";
  cout<<"\n\nMasukkan Pilihan : ";
  cin>>pilih;
  if(pilih==1)
   {inputdata();goto awal;}
  if(pilih==2)
   {hapusdata();goto awal;}
  if(pilih==3)
   {lihatdata();goto awal;}
  if(pilih==4)
   {editdata();goto awal;}
  if(pilih==5)
   {
    cout<<"\n\n\n\n\n\n\n\n                     APAKAH ANDA YAKIN KELUAR DARI PROGRAM??\n\n";
    cout<<"                         [Y]                         [N]                  \n"<<endl;
    cout<<"";cin>>w;
    if(w=='y'||w=='Y'){
     cout<<"\n\n\n\n\n******************************* PROGRAM SELESAI *******************************";}
    if(w=='n'||w=='N'){goto awal;}}
    else
   {cout<<"Pilihan 1-5";goto awal;}
cout<<"\n\n\n\n\n\n\n\n\n\t\t\t     PROGRAM BY KOYOR KZL\n\n";
cout<<"\t\t\t        sekian terimakasih";
}

