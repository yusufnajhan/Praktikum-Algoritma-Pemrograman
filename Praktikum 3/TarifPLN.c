//Nama file :
//deskripsi : Menghitung besarnya tarif listrik yang dikenakan
//            berdasarkan golongan dan pemakaian daya listrik.
//Nama      : Yusuf Muhammad Najhan
//NIM       : 24060121130048


#include <stdio.h>

int main () { //program utama

//Kamus

    int gol;                       //jenis golongan
    int daya;                      //besarnya pemakaian daya listrik dalam kWh
    int tarif;                     //besaran tarif listrik yang harus dibayar

//Algoritma

    printf ("----------Menghitung besarnya tarif listrik yang harus dibayar---------\n");
    printf ("-----------berdasarkan golongan dan pemakaian daya listriknya----------\n");

    printf ("\nGolongan 1 = Rp. 1000 per kWh \n");
    printf ("Golongan 2 = Rp. 2000 per kWh \n");
    printf ("\nMinimal pembayaran adalah 100 kWh\n");
    printf ("Jika pemakaian daya mencapai 1000 kWh dan seterusnya\n");
    printf ("Tarif ditambah sebesar 10 persen dari total pembayaran\n");


    printf ("\nMasukkan golongan = ");                     //input
    scanf  ("%d", &gol);
    printf ("\nMasukkan pemakaian daya listrik = ");
    scanf  ("%d", &daya);


    if (daya <= 100) {
        if (gol == 1) {                               //proses
            tarif = 100 * 1000;
        }
        else if (gol == 2) {
            tarif = 100 * 2000;
        }
    }
    else if (daya > 100 & daya < 1000) {
        if (gol == 1) {
            tarif = daya * 1000;
        }
        else if (gol == 2) {
            tarif = daya * 2000;
        }
    }
    else if (daya >= 1000) {
        if (gol == 1) {
            tarif = daya * 1000 * 1.1;
        }
        else if (gol == 2) {
            tarif = daya * 2000 * 1.1;
    }
    }

    printf ("\nTarif listrik yang harus dibayar adalah = Rp. %d ", tarif);  //output


    printf ("\n------------------------------Selesai-------------------------------------");


    return 0;
}
