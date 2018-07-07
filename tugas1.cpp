#include <iostream>
#include <conio.h>
using namespace std;

main(){
	int saldo [5] = {24.98,345.67,0.00,-42.16,224.62};
 double a = 24.98;
     double b = 345.67;
     double c = 0.00;
     double d = -42.16;
     double e = 224.62;
     for(int i=0; i<5;i++){
          cout<<"saldo pada indek ke ["<<i<<"] = "<<saldo[i];
          cout<<endl;
     }

    
 cout<<"============================"<<endl;
 cout<<"Tampil saldo indek ke    : "<<a<<endl;
 cout<<"Tampil saldo indek ke    : "<<b<<endl;
 cout<<"Tampil saldo indek ke    : "<<c<<endl;
 cout<<"Tampil saldo indek ke    : "<<d<<endl;
 cout<<"Tampil saldo indek ke    : "<<e<<endl;
 
 getch();
}

