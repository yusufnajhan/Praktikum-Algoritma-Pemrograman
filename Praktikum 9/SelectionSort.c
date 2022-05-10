//Nama File : SelectionSort.c
//Deskripsi : Melakukan pengurutan elemen array dari yang terkecil ke yang terbesar
//			  menggunakan algoritma 'selection sort'
//Nama 		: Yusuf Muhammad Najhan
//NIM		: 24060121130048


//header
#include <stdio.h>


void Swap (int *x, int *y) {	//prosedur menukar nilai variabel
	
	//Kamus lokal
	int store;		//variabel pembantu mekanisme swap
	
	//Algoritma
	store = *x;		//store menyimpan nilai x
	*x = *y;		//x diisi dengan nilai di y
	*y = store;		//y diisi dengan nilai di store
}


void SelectSort (int T[], int N) {	//prosedur selection sort
	
	//T adalah sebuah array
	//N adalah panjang array
	
	
	//Kamus Lokal
	int i;		//indeks dari keseluruhan list
	int j;		//indeks dari unsorted list
	int min;	//indeks dari elemen terkecil pada unsorted list
	
	
	//Algoritma
	for (i = 0; i <= N-1 ; i++) {	//perulangan pada seluruh array
		for (j = i+1; j <= N; j++) {	//perulangan pada unsorted list
			min = i;	//inisialisasi nilai min
			
			if (T[j] < T[min]) {	//jika elemen ke-j lebih kecil dari elemen ke-min
				min = j;	//nilai min diubah menjadi j
			}
			
			Swap (&T[i], &T[min]);	//nilai elemen ke-i dan ke-min ditukar
		}	
	}
}


int main () {
	
	
	//Kamus
	int T[]	= {0,4,2,17,20,5,7,1,19,6,3,4};	//memberi nilai pada elemen array T
	int N = 11;							//panjang arraynya 9 (indeks 0 - 9) 
	int k;								//counter perulangan	
	
	
	//Algoritma
	printf ("------------------------Melakukan pengurutan (sorting)------------------------------");
    printf ("\n--------------------------dengan selection sort---------------------------------\n");
    
	
	printf ("\nArray T sebelum disorting = ");	//menampilkan array T sebelum dilakukan sorting
	printf ("{");
	for (k = 0; k <= N; k++) {
		printf ("%d, ", T[k]);
	}
	printf ("}\n");
	
	
	SelectSort (T, N);		//melakukan prosedur sorting
	
	
	printf ("\nArray T sesudah disorting = ");	//menampilkan array T setelah dilakukan sorting
	printf ("{");
	for (k = 0; k <= N; k++) {
		printf ("%d, ", T[k]);
	}
	printf ("}\n");
	
	
	return 0;
}
