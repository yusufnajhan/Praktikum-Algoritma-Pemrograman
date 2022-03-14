//Nama file : HargaDiskon.c
//deskripsi : Menghitung besarnya harga setelah diberi diskon.
//            Terdapat 3 jenis diskon dan harga juga diberi range
//Nama      : Yusuf Muhammad Najhan
//NIM       : 24060121130048


#include <stdio.h>

int main () { //program utama

//Kamus

    char discount;                   //jenis besaran diskon
    int price;                     //harga awal sebelum didiskon
    int total;                     //harga akhir setelah didiskon

//Algoritma

    printf ("-----------------Menghitung besarnya harga setelah diberi diskon---------------\n");

    printf ("\nJenis diskon : \n");
    printf ("1. 'A' diskon 10 persen \n");
    printf ("2. 'B' diskon 15 persen \n");
    printf ("3. 'C' diskon 20 persen \n");
    printf ("\nRange harga = di antara Rp. 200 dan Rp. 10000 \n");


    printf ("\nMasukkan jenis diskon = ");                     //input
    scanf  (" %c", &discount);
    printf ("\nMasukkan harga awal = ");
    scanf  ("%d", &price);

    if (price > 200 & price < 10000) {                         //proses
        if (discount == 'A') {
            total = price * 0.9;
        }
        else if (discount == 'B') {
            total = price * 0.85;
        }
        else if (discount == 'C') {
            total = price * 0.8;
        }
        else {
            printf ("\nJenis besaran diskon belum tepat\n");
        }

    }
    else {
        printf ("\nHarga tidak masuk range");
    }

    printf ("\nTotal biaya setelah diberi diskon = Rp. %d ", total);   //output


    printf ("\n------------------------------Selesai-------------------------------------");


    return 0;
}
