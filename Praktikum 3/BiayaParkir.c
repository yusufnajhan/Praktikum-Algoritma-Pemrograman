//Nama file : BiayaParkir.c
//deskripsi : Menentukan besarnya biaya parkir berdasarkan lamanya parkir
//Nama      : Yusuf Muhammad Najhan
//NIM       : 24060121130048

#include <stdio.h>

int main () { //program utama

//Kamus

    int time;                   //lamanya parkir, dalam jam
    int cost;                   //biaya parkir, dalam Rupiah

//Algoritma

    printf ("-----------------------Menghitung besarnya biaya parkir--------------------------\n");
    printf ("-------------------yang dihitung berdasarkan lamanya parkir--------------------\n");


    printf ("\nMasukkan lamanya waktu parkir = ");                              //input
    scanf  ("%d", &time);

    if (time <= 2) {                                                           //proses
        cost = 2000;
    }
    else {
        cost = 2000 + ((time - 2) * 500);
    }

    printf ("\nBiaya parkir yang harus dibayarkan adalah = Rp. %d ", cost);     //output


    printf ("\n------------------------------Selesai-------------------------------------");


    return 0;
}
