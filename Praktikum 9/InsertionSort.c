//Nama File : InsertionSort.c
//Deskripsi : Melakukan pengurutan elemen array dari yang terkecil ke yang terbesar
//			  menggunakan algoritma 'insertion sort'
//Nama 		: Yusuf Muhammad Najhan
//NIM		: 24060121130048


//header
#include <stdio.h>


void InsertSort (int T[], int N) {	//prosedur insertion sort
	
	//T adalah sebuah array
	//N adalah panjang array
	
	
	//Kamus Lokal
	int i;		//indeks dari keseluruhan list 
	int j;		//indeks dari sorted list
	int insert;	//elemen pertama dari unsorted list, yang akan dimasukkan ke sorted list
	
	
	//Algoritma
	for (i = 1; i <= N; i++) {	//perulangan pada seluruh array
		
		insert = T[i];	//elemen unsorted list dimasukkan ke variabel insert
		j = i - 1;		//indeks terakhir dari sorted list adalah (unsorted list - 1)			
		
		while (j >= 0 && T[j] > insert) {	//perulangan while jika elemen sorted list lebih besar dari elemen insert
			T[j + 1] = T[j];
			j = j - 1;
		}
		
		T[j+1] = insert;	//sorted list diekspansi
							//lalu diberi nilai dari variabel insert
	}
}


int main () {
	
	
	//Kamus
	int T[]	= {1,9,4,0,3,11,5,2,1,0};	//memberi nilai pada elemen array T
	int N = 9;							//panjang arraynya 9 (indeks 0 - 9) 
	int k;								//counter perulangan	
	
	
	//Algoritma
	printf ("------------------------Melakukan pengurutan (sorting)------------------------------");
    printf ("\n--------------------------dengan insertion sort---------------------------------\n");
    
	
	printf ("\nArray T sebelum disorting = ");	//menampilkan array T sebelum dilakukan sorting
	printf ("{");
	for (k = 0; k <= N; k++) {
		printf ("%d, ", T[k]);
	}
	printf ("}\n");
	
	
	InsertSort (T, N);		//melakukan prosedur sorting
	
	
	printf ("\nArray T sesudah disorting = ");	//menampilkan array T setelah dilakukan sorting
	printf ("{");
	for (k = 0; k <= N; k++) {
		printf ("%d, ", T[k]);
	}
	printf ("}\n");
	
	
	return 0;
}
