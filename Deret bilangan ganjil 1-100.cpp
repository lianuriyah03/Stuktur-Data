#include <iostream>
#include <conio.h>
using namespace std;
main()
{
int input_batas, bilangan_bulat, cek, i,n;
cout<<"Masukkan Batasan dari Deret Bilangan ganjil 1-100 : ";
cin>>input_batas;
n=100;
cout<<"Hasil nilai rata-rata nilai Deret Bilangan ganjil adalah sebagai berikut : "<<endl<<endl;

for(int i=1; i<=n; i++){
        if (i % 5==0)
{
	cout<<i<<" ";
}
}
for(i=0;i<=input_batas;i++)
{
	if(i%2!=0)
{
	cout<<i<<" ";
}
}
getch();
}
