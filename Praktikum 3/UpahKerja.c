//Nama file : UpahKerja.c
//deskripsi : Menghitung besarnya upah yang diterima
//            berdasarkan jam kerja perminggu dan golongannya.
//Nama      : Yusuf Muhammad Najhan
//NIM       : 24060121130048


#include <stdio.h>

int main () { //program utama

//Kamus

    int gol;                      //jenis golongan
    int jam;                      //lamanya jam kerja per minggu
    int gaji;                     //besaran gaji yang diterima

//Algoritma

    printf ("-----------------Menghitung besarnya upah yang diterima---------------\n");
    printf ("-------------------berdasarkan jam kerja dan golongan------------------\n");

    printf ("\nGolongan 1 = Rp. 1000 per jam \n");
    printf ("Golongan 2 = Rp. 1500 per jam \n");
    printf ("Golongan 3 = Rp. 2000 per jam \n");
    printf ("Golongan 4 = Rp. 2500 per jam \n");
    printf ("\nJika jam kerja lebih dari 40 jam\n");
    printf ("40 jam pertama dihitung normal, dan kelebihan setiap jamnya dikali 1.5\n");


    printf ("\nMasukkan golongan = ");                //input
    scanf  ("%d", &gol);
    printf ("\nMasukkan jam kerja = ");
    scanf  ("%d", &jam);


    if (jam <= 40) {
        if (gol == 1) {                                             //proses
            gaji = jam * 1000;
        }
        else if (gol == 2) {
            gaji = jam * 1500;
        }
        else if (gol == 3) {
            gaji = jam * 2000;
        }
        else if (gol == 4) {
            gaji = jam * 2500;
        }
        else {
        printf ("Golongan yang dimasukkan belum tepat");
    }

    }
    else {
        if (gol == 1) {
            gaji = 40 * 1000 + ( (jam - 40) * 1.5 * 1000);
        }
        else if (gol == 2) {
            gaji = 40 * 1500 + ( (jam - 40) * 1.5 * 1500);
        }
        else if (gol == 3) {
            gaji = 40 * 2000 + ( (jam - 40) * 1.5 * 2000);
        }
        else if (gol == 4) {
            gaji = 40 * 2500 + ( (jam - 40) * 1.5 * 2500);
        }
        else {
            printf ("Golongan yang dimasukkan belum tepat");
        }
    }

    printf ("\nGaji yang diterima adalah sebesar = Rp. %d ", gaji);    //output


    printf ("\n------------------------------Selesai-------------------------------------");


    return 0;
}
