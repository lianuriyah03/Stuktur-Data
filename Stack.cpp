#include<iostream>
#include<conio.h>
using namespace std;

struct STACK
{
int data[5];
int atas;
}tumpukan;
STACK tumpuk;

int main ()
{
int pilihan,baru,i;
tumpuk.atas=-1;
do
{
	cout<<"\n=======Program Stack======\n";
cout<<"\n1.Push Data\n";
cout<<"\n2.Pop Data\n";
cout<<"\n3.Print Data\n";
cout<<"\n4.EXIT\n";
cout<<"\nPilihan = ";
cin>>pilihan;
switch(pilihan)
{
case 1:
 {
 if(tumpuk.atas==5-1)
 {
 cout<<"Tumpukan Penuh";
 cout<<endl;
 getch();
 }
 else
 {
 cout<<"Data yang akan di-push = ";cin>>baru;
 tumpuk.atas++;
 tumpuk.data[tumpuk.atas]=baru;
 }
 cout<<"-------------------------------------\n";
break;
}
case 2:
 {
 if(tumpuk.atas==-1)
 {
 cout<<"Tumpukan Kosong";
 cout<<endl;
 getch();
 }
 else
 {
 cout<<"Data yang akan di-pop = "<<tumpuk.data[tumpuk.atas];
 tumpuk.atas--;
 cout<<endl;
 getch();
 }
 cout<<"-------------------------------------\n";
break;
}
case 3:
 {
 if(tumpuk.atas==-1){
 cout<<"Tumpukan Kosong";
 cout<<endl;
 getch();
 }
 else
 {
    cout<<"\nData pada stack saat ini adalah : \n";
 for(int i=0; i<=tumpuk.atas; i++)
        {
  cout<<"Nilai ruang ke "<<i<<" : "<<tumpuk.data[i]<<endl;
        }
 cout<<endl;
 getch();
 }
 cout<<"-------------------------------------\n";
break;
}
default:
 cout<<"\nTidak ada dalam pilihan";
 cout<<endl;
 cout<<"-------------------------------------\n";
 }
 }
 while(pilihan!=4);
 getch();
}
