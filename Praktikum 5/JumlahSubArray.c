//Nama file : JumlahSubArray.c
//deskripsi : Menentukan selisih ketinggian terbesar antara puncak bukit
//			  dengan lembah bukit atau sebaliknya. Puncak bukit 
//			  dan lembah bukit tersebut adalah jalur perjalanan Pak Kentos.			  
//Nama      : Yusuf Muhammad Najhan
//NIM       : 24060121130048


#include <stdio.h>

int main() {	//Program Utama
	
	//Kamus1
	int i;		//counter perulangan pertama
	int j;		//counter perulangan kedua
	int k;		//counter perulangan ketiga
	int N;		//banyaknya data bilangan
	int Sum;	//jumlah dari sub array N
	
	
	//Algoritma
	printf ("--------------------Menghitung jumlah dari sub array sembarang----------------------\n");
	printf ("------------------------------------------------------------------------------------\n");
	
	printf ("\nMasukkan banyaknya elemen array (N) = ");		//input nilai N
	scanf ("%d", &N);
	
    if (N <= 0) {		//jika nilai N belum tepat, nol atau negatif
    	printf ("\nBanyaknya elemen array harus positif");
    }
    
    else {	//jika nilai N sudah tepat, positif
    
    
		//Kamus2
		int Elmt[N]; 	//deklarasi array integer dari deret N
    	
    	
    	//Memasukkan inputan-inputan yang diperlukan
    	for (i = 1; i <= N; i++) {	//perulangan dengan counter i
    		printf ("\nMasukkan jalur lintasan ke-%d = ", i);	//mengisi elemen ke-i (jalur lintasan) dari array Elmt dengan inputan
    		scanf ("%d", &Elmt[i]);
    	}
    	
    	
    	//Menghitung jumlah sub array
    	Sum = 0;		//inisialisasi nilai Sum
		for (j = N; j >= 1; j--) {	//perulangan dengan counter j	
				
			Sum = Sum + Elmt[j];		//nilai Sum ditambah dengan elemen ke-j
			
			if (j < N) {		//jika j kurang dari N
				for (k = N; k >= j+1; k-- ) {	//perulangan dengan counter k
					Sum = Sum + Elmt[k];	//nilai Sum ditambah dengan elemen ke-k
				}
			}

			
		}
			
			
		printf ("\nJumlah deret bilangan N adalah = %d", Sum); 	//output hasilnya
    }

	
	
	return 0;
}

