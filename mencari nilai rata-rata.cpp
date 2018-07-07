#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<iomanip>
#include <cstring>
using namespace std;

main()
{
int a,n;
char nama[5][20],nim[5][20];
char kelas[5][6],grade[5],ket[5][6];
int uts[5],uas[5],rata[5],tugas[5];

cout<<"Masukkan Jumlah Data yang ingin di Input : ";cin>>n;
for(a=1;a<=n;a++)
{

cout<<"Data Ke: "<<a<<endl;
cout<<"Nama : ";cin>>nama[a];
cout<<"Kelas: ";cin>>kelas[a];
cout<<"NIM : ";cin>>nim[a];
cout<<"Nilai Tugas : ";cin>>tugas[a];
cout<<"Nilai UTS : ";cin>>uts[a];
cout<<"Nilai UAS : ";cin>>uas[a];
rata[a]=(tugas[a]+uts[a]+uas[a])/3;
if(rata[a]>=80)
{
grade[a]='A';
strcpy(ket[a],"LULUS");
}
else if(rata[a]>=70)
{
grade[a]='B';
strcpy(ket[a],"LULUS");
}
else if(rata[a]>=60)
{
grade[a]='C';
strcpy(ket[a],"LULUS");
}
else if(rata[a]>=50)
{
grade[a]='D';
strcpy(ket[a],"TIDAK LULUS");
}
else
{
grade[a]='E';
strcpy(ket[a],"TIDAK LULUS");
}
cout<<endl;
}

cout<<"Daftar Nilai Mahasiswa"<<endl;
cout<<"-----------------------------------------------------------------------------------------"<<endl;
cout<<"No  Nama      NIM         Kelas    Nilai   Nilai   Nilai   Rata    Grade    Keterangan"<<endl;
cout<<"                                   Tugas   UTS     UAS     Rata"<<endl;
cout<<"-----------------------------------------------------------------------------------------"<<endl;
for(a=1;a<=n;a++)
{
cout<<setiosflags(ios::left)<<setw(3)<<a;
cout<<setiosflags(ios::left)<<setw(10)<<nama[a];
cout<<setiosflags(ios::left)<<setw(13)<<nim[a];
cout<<setiosflags(ios::left)<<setw(11)<<kelas[a];
cout<<setiosflags(ios::left)<<setw(7)<<tugas[a];
cout<<setiosflags(ios::left)<<setw(7)<<uts[a];
cout<<setiosflags(ios::left)<<setw(7)<<uas[a];
cout<<setiosflags(ios::left)<<setw(13)<<rata[a];
cout<<setiosflags(ios::left)<<setw(17)<<grade[a];
cout<<setiosflags(ios::left)<<setw(3)<<ket[a]<<endl;
}
cout<<"------------------------------------------------------------------------------------------"<<endl;
getch();
}

