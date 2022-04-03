//Nama file : SelisihKetinggian.c
//deskripsi : Menentukan selisih ketinggian terbesar antara puncak bukit
//			  dengan lembah bukit atau sebaliknya. Puncak bukit 
//			  dan lembah bukit tersebut adalah jalur perjalanan Pak Kentos.			  
//Nama      : Yusuf Muhammad Najhan
//NIM       : 24060121130048


#include <stdio.h>


int main () { //program utama


//Kamus1

    int N;                   //banyaknya data jalur lintasan
    int i;					 //counter perulangan pertama
    int j;					 //counter perulangan kedua
    int k;					 //counter perulangan ketiga
    int u;					 //counter perulangan keempat
    int a;					 //ketinggian lembah bukit (terendah)
    int b;					 //ketinggian puncak bukit (tertinggi)


//Algoritma

    printf ("-----------------------Menghitung selisih ketinggian terbesar antara--------------------------\n");
    printf ("------------------------------puncak bukit dengan lembah bukit--------------------------------\n");
    printf ("----------------------------------yang dilewati Pak Kentos------------------------------------\n");
    printf ("----------------------------------------------------------------------------------------------\n\n");
    
    printf("\n- Harus memasukkan banyaknya data jalur lintasan (N)");
    printf("\n  dan nilai-nilai jalur lintasan (elemen array)");
    printf("\n- Nilai jalur lintasan melambangkan ketinggian\n");
    

    printf ("\nMasukkan banyaknya data jalur lintasan (N) = ");                 //input
    scanf  ("%d", &N);
    
    if (N <= 0) {		//jika nilai N belum tepat, nol atau negatif
    	printf ("\nBanyaknya data jalur lintasan harus positif");
    }
    
    else {		//jika nilai N sudah tepat, positif
    	
    	
    	//Kamus2
    	int Elmt[N];	//deklarasi array integer Elmt, berisi elemen sebanyak N
    	
    	
    	//Memasukkan inputan-inputan yang diperlukan
    	for (i = 1; i <= N; i++) {	//perulangan dengan counter i
    		printf ("\nMasukkan jalur lintasan ke-%d = ", i);	//mengisi elemen ke-i (jalur lintasan) dari array Elmt dengan inputan
    		scanf ("%d", &Elmt[i]);
    		
    		if (Elmt[i] <= 0) {		//jika inputan elemen ke-k tidak sesuai, yaitu nol atau negatif
    			printf ("\nMasukan jalur lintasan harus positif");
    			break;				//keluar dari looping
    		}
    
    	}
    	
    	
	    //Mencari nilai ketinggian terkecil
	    a = Elmt[1];	//inisialisasi nilai a
		for (j = 1; j <= N; j++) { 			//perulangan dengan counter j
		
		    if (Elmt[j] < a) {				//jika elemen saat ini (j) lebih kecil dari a
		    	a = Elmt[j];				//maka nilai a diganti dengan elemen j
		    }
		}
		
		//Mencari nilai ketinggian terbesar
		b = Elmt[1];	//inisialisasi nilai b 
		for (k = 1; k <= N; k++) {			//perulangan dengan counter k

			if (Elmt[k] > b) {				//jika elemen saat ini (k) lebih besar dari b
				b = Elmt[k];				//maka nilai b diganti dengan elemen k
			}


		}
				    	
				    	
		//Menghitung dan menampilkan selisih ketinggian (terbesar - terkecil)
    	printf ("\n\nSelisih ketinggian terbesarnya adalah = %d", b - a);	


	}
	

    printf ("\n\n------------------------------Selesai-------------------------------------");


    return 0;
}
