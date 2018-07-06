#include <conio.h>
#include <iostream>
using namespace std;
main(){
int c,i,posisi;
int A[20]={3,2,4,10,20,1,5,8,7,9,6,5,11,12,14,13,16,15,17,19};


cout<<"Data : ";
for(i=0;i<20;i++){
 cout<<A[i]<<" ";
}

cout<<"\nData yang ingin dicari : ";
cin>>c;
i=0;
posisi=0;
while(i<19 && A[i]!=c){
 i++;
}
if (A[i]!=c){
 cout<<"Maaf data yang dicari tidak ada";
}else if(posisi=i+1)
   cout<<"ditemukan pada posisi ke "<<posisi;
getch();
}

