#include <stdio.h>
#include <conio.h>
using namespace std;

main(){
char s[] = "abcdefghijklmnopqrstuvwxyz";
int chasc,i,cnt=0, konsonan=0;
char ch,str[40]="";
printf("PROGRAM MENCARI KONSONAN DAN VOKAL\n\n");
printf("Input Kalimat : ");
scanf("%[^\n]s",str);
for(i=0;str[i]!='\0';i++)
{
chasc = str[i];
switch(chasc)
{
case'a' :
case'A' :
case'e' :
case'E' :
case'i' :
case'I' :
case'o' :
case'O' :
case'u' :
case'U' :
cnt++;
break;
default:
konsonan++;
break;
}
}

printf("\nJumlah Vokal %d",cnt);
printf("\nJumlah Konsonan %d",konsonan);
getch();
}
