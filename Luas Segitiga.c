/*
	program     : luas segitiga
	author  	: <3411221039><fauzan wicaksono>
	kelas   	: b
	date    	: 17 okt 2022
	deskripsi   : template program c
*/

//preprocessor
#include <stdio.h>
#include <conio.h>

//konstanta
#define Garis "{~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~}"
#define Judul "   Menacari Luas Dari Sebuah Segitiga   "

//main driver
int main (){
	//kamus
	int T, A;
	int Luas;
	
	//algoritma
	printf("%s\n",Garis);
	printf("%s\n",Judul);
	printf("%s\n",Garis);
	printf("\n");
	
	printf (" Masukan Alas   : ");scanf ("%d",&A);
	printf (" Masukan Tinggi : ");scanf ("%d",&T);
	
	//rumus
	Luas = (A * T)/2;
	printf (" Maka Luasnya Adalah %d",Luas);
	
	return 0;
}
