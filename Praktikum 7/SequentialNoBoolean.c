//Nama File : SequentialNoBoolean.c
//Deskripsi : melakukan prosedur pencarian (searching) secara sekuensial tanpa boolean
//Nama 	 	: Yusuf Muhammad Najhan
//NIM		: 24060121130048


//Urutan data pada array adalah 1 sampai N

//header
#include <stdio.h>
#include "SeqNoBoolean.h"


int main () { //program utama

//Kamus

    const int Nmax = 100;           //jumlah data terbanyak yang bisa ditampung array
    int i;							//counter looping pertama
    int j;							//counter looping kedua
	int n;							//panjang array atau banyaknya data
    int x;							//integer yang ingin dicari di array
    int ix;							//indeks integer x pada array
   
    
//Algoritma

    printf ("-----------------Melakukan pencarian (searching) secara sekuensial-------------------");
    printf ("\n--------------------------tanpa menggunakan boolean---------------------------------\n");
    
    
    printf ("\nMasukkan panjang array atau banyaknya data = ");
    scanf ("%d", &n);
	
	if (n < 10) {	//jika panjang array kurang dari 10
		printf ("\nPanjang array minimal 10 data");
	}
	
	else {
		
	    int t[n];  //deklarasi array t dengan panjang n
	    for (i = 0; i < n; i++) {
	    	printf ("\n- Masukkan data ke-%d dari array = ", i+1);		//proses memasukkan data
	    	scanf ("%d", &t[i]);
	    }
	    
	    
	    printf ("\nMaka array nya berisi = ");		//Menampilkan isi array
	    printf ("{");
	    for (j = 0; j < n; j++) {
	    	printf ("%d, ", t[j]);
	    }
	    printf ("}\n");
	    
		
		printf ("\nMasukkan integer yang ingin dicari pada array = ");		//memasukkan integer yang ingin dicari
		scanf ("%d", &x);
	
	
	    SEQSearchX1 (t, n, &ix, x);	//proses memasukkan ke prosedur
	    
	
		if (ix == -1) {
			printf ("\nElemen tidak ditemukan");	//mengeluarkan pesan elemen tidak ditemukan
		}
		else {
			printf ("\nElemen ditemukan di urutan ke-%d ", ix);	//mengeluarkan pesan indeks elemen yang dicari
		}
			
	}   
			

    printf ("\n\n------------------------------Selesai-------------------------------------\n");


    return 0;

}
