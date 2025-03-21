/*
	program 	: template.c
	author		:<3411221039><fauzan wicaksono>
	kelas   	: b
	deskripsi   : template program c
	tanggal		: 18 okt 2022
*/

//preprocessor
#include <stdio.h>
#include <conio.h>

//konstanta = define
#define Garis  ">=============================(++)====================================<"
#define intro1 " Izin memperkenalkan diri nama saya Fauzan wicaksono asal kota bandung"
#define intro2 "        Saya dari FSI jurusan INFORMATIKA angkatan tahun 2022         "
#define hitung "Kalkulasi menghitung luas tabung"

	//main driver
	int main(void)
	{
		//kamus\\
		
		//kamus bagian biodata
		char	NAMA[16]  = "Fauzan wicaksono";
		int 	UMUR      = 19;
		char	KELAS     = 'B';
		char 	HOBBY[99] = "berenang dan membaca buku";
		
		//kamus bagian rumus luas tabung
		float 	Phi       = 3.14;
		int 	JariJari;
		int 	Tinggi;
		float	Luas ;
		
		
		//algoritma\\
		
		//bagian atas 
		printf("%s\n",Garis);
		printf("%s\n",intro1);
		printf("%s\n",intro2);
		printf("%s\n",Garis);
		
		//bagian tengah biodata
		printf(" masukan NAMA  : %s\n",NAMA);
		printf(" masukan UMUR  : %d\n",UMUR);
		printf(" masukan KELAS : %c\n",KELAS);
		printf(" masukan HOBBY : %s\n",HOBBY);
		
		//batas
		printf("%s\n",Garis);
		
		//bagian bawah menghitung luas tabung
		printf("\n");
		printf(" %s\n",hitung);
		printf(" Masukan JariJari : ");scanf("%d",&JariJari);
		printf(" masukan Tinggi   : ");scanf("%d",&Tinggi);
		
		//rumus
		Luas = (2 * Phi * JariJari * (JariJari + Tinggi));
		printf(" Maka luasnya Adalah %.2f ",Luas);
		
		return 0;
	
	}	
