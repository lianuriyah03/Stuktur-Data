#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int i;
	int list_int[10];
	for (i=0; i<10; i++){
	      list_int[i] = i + 1;
	      printf( "list_int[%d] diinisialisasi dengan %d.\n", i, list_int[i]);
	}
}  

