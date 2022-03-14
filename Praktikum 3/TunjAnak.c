//Nama file : TunjAnak.c
//deskripsi : Menghitung besarnya tunajangan anak yang diberikan
//            berdasarkan jumlah anak dan gaji pokok.
//Nama      : Yusuf Muhammad Najhan
//NIM       : 24060121130048


#include <stdio.h>

int main () { //program utama

//Kamus

    int child;                 //jumlah anak yang dimiliki
    int salary;                //besarnya gaji pokok
    int tunjangan;            //besarnya tunjangan anak yang diterima

//Algoritma

    printf ("-----------------Menghitung besarnya tunjangan anak yang diterima--------------\n");
    printf ("--------------------berdasarkan jumlah anak dan gaji pokoknya--------------------");

    printf ("\nTunjangan = jumlah anak * 10 persen dari gaji pokok \n");
    printf ("\nJika jumlah anak lebih dari 3\n");
    printf ("jumlah anak yang diberi tunjangan hanya 3\n");


    printf ("\nMasukkan jumlah anak = ");                //input
    scanf  ("%d", &child);
    printf ("\nMasukkan besarnya gaji pokok = ");
    scanf  ("%d", &salary);


    if (child <= 3) {
        tunjangan = child * (0.1 * salary);                //proses
    }
    else {
        tunjangan = 3 * (0.1 * salary);
    }

    printf ("\nTunjangan anak yang diterima adalah sebesar = Rp. %d ", tunjangan);  //output


    printf ("\n------------------------------Selesai-------------------------------------");


    return 0;
}
