#include <stdio.h>
 #include <conio.h>
 #include <stdlib.h>
 main()
 {
       int *data;
       int i,banyakdata;
       printf("Banyak data yang akan diinputkan : ");scanf("%i",&banyakdata);
       data=(int *)malloc(sizeof(int)*banyakdata);
       for(i=0;i<banyakdata;i++)
       {
             printf("Pemasukan data ke-%i :",i+1);scanf("%i",(data+i));
       }
       printf("Data yang telah diinputkan adalah : \n");
       for(i=0;i<banyakdata;i++)
            printf("Data ke-%i : %i\n",i+1,*(data+i));
       getch();
       return 0;
       }
