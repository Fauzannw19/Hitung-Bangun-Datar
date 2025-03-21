/*
	program     : luas persegi panjang
	author  	: <3411221039><fauzan wicaksono>
	kelas   	: b
	date    	: 17 okt 2022
	deskripsi   : template program c
*/

//preprocessor
#include <stdio.h>
#include <conio.h>

//konstanta
#define Garis "<======================================"
#define Judul "   Mencari Luas Dari Persegi Panjang   "

//main driver
int main (){
	//kamus
	int P, L;
	int Luas;
	
	//algoritma
	printf("%s\n",Garis);
	printf("%s\n",Judul);
	printf("%s\n",Garis);
	printf("\n");
	
	printf (" Masukan Panjang : ");scanf ("%d",&P);
	printf (" Masukan Lebar   : ");scanf ("%d",&L);
	
	//rumus
	Luas = ( P * L );
	printf (" Maka Luasnya Adalah %d ",Luas);
	
	return 0;
	
}
	
	
