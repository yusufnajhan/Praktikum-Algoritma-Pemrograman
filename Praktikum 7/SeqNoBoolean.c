#include "SeqNoBoolean.h"
#include <stdio.h>

void SEQSearchX1 (int T[], int N, int *IX, int X) {	//prosedur pencarian sekuensial tanpa boolean

	//X adalah inteeger yang akan dicari, apakah ada di array T
	//IX adalah indeks dari X jika ditemukan di array T,
		//Jika X tidak ditemukan di array T, maka nilai IX akan bernilai -1
		
	
	//Kamus Lokal
	int i;		//indeks dalam array T untuk melakukan pencarian
	
	
	//Algoritma
	i = 0;		//inisialisasi nilai i
	
	while (i < N-1 && T[i] != X) {		//melakukan perulangan sampai indeks i sudah sampai akhir atau X sudah ditemukan
		i = i + 1;		//indeks i di inkremen
	}
	
	
	if (T[i] == X) {		//jika elemen indeks ke-i sama dengan X
		*IX = i+1; 			//indeks IX diberi nilai i
	} 
	else {			//jika elemen indeks ke-i tidak sama dengan X
		*IX = -1;	//indeks IX diberi nilai -1
	}
	
}

