#include <stdio.h>
#include <stdlib.h>

// NAMA: SANDRINA BRAMUDYA || NIM: 202302011006 || MATA KULIAH: PEMROGRAMAN DASAR (TEORI) || PRODI: INFORMATIKA || STUDI KASUS: ATM

void DATA_DIRI()
{
    char NAMA[5][50] = {"\t\t\t\t  SANDRINA BRAMUDYA","\t\t\t\t     202302011006","\t\t\t\tUAS PEMROGRAMAN DASAR","\t\t\t\t     INFORMATIKA","\t\t\t\t STUDI KASUS = 'ATM' "}; // MEMBUAT ARRAY NAMA

    {

    printf ("\t\t DIBUAT OLEH :                    \n");
    printf ("\t\t\t\t\t +--------------------------------+ \n");

    for (int i=0;i<5;i++) // PERULANGAN
    {
        printf  ("\t\t%s\t\t\n",NAMA[i]); // MEMANGGIL ARRAY YANG SUDAH DIBUAT
    }

    printf ("\t\t\t\t\t +--------------------------------+ \n\n");

    }

}

void ATM()
{

    printf ("\t\t +----------------------------------------------------------------------------------+ \n"); // OUTPUT TAMPILAN ATM
    printf ("\t\t |                                  SELAMAT DATANG                                  | \n");
    printf ("\t\t |                               DI BANK SUMBER MAKMUR                              | \n");
    printf ("\t\t +----------------------------------------------------------------------------------+ \n");

}

int main(){

DATA_DIRI(); // MEMANGGIL ARRAY DATA DIRI YANG SUDAH DIBUAT
ATM();

    int saldo=50000000, pin =946101, transfer, rekening_yang_dituju, setor_tunai, nominal_uang, pilihan, pembayaran, ulangi, cicilan;

    printf ("\t\t +----------------------------------------------------------------------------------+ \n");
    printf ("\t\t |                    ^^^SILAHKAN MASUKKAN KARTU REKENING ANDA^^^                   | \n");
    printf ("\t\t +----------------------------------------------------------------------------------+ \n\n");

pin: // PIN

printf ("\n\n\t +--------------------------------------------------------------------------------------------------+ \n\n");

    printf ("\t\t ~ Masukkan Pin Anda : ");
    scanf ("%d",&pin); // INPUT PIN
    {
        if (pin == 946101 ){
system ("cls"); // MEMBERSIHKAN TAMPILAN OUTPUT (SUPAYA TIDAK TERLALU PANJANG DAN NEXT KE KASUS SELANJUTNYA)

            printf ("\t\t +----------------------------------------------------------------------------------+ \n");
            printf ("\t\t |                          ^^^^ACCSES MASUK BERHASIL!^^^^                          | \n");
            printf ("\t\t +----------------------------------------------------------------------------------+ \n");

        }
        else
        {

system ("cls"); // MEMBERSIHKAN TAMPILAN OUTPUT (SUPAYA TIDAK TERLALU PANJANG DAN NEXT KE KASUS LAINNYA)

ATM(); // MEMANGGIL TAMPILAN DARI ATM

            printf ("\n\n\t\t +----------------------------------------------------------------------------------+ \n");
            printf ("\t\t |                   MOHON MAAF PIN YANG ANDA MASUKKAN TIDAK SESUAI                 | \n");
            printf ("\t\t |                       SILAHKAN MASUKKAN PIN ANDA DENGAN BENAR                    | \n");
            printf ("\t\t +----------------------------------------------------------------------------------+ \n");

            goto pin; // KEMBALI MEMASUKKAN PIN DENGAN BENAR
        }
    }


menu: // MENU
ATM();


            printf ("\n\n\t\t +----------------------------------------------------------------------------------+ \n"); // OUTPUT TAMPILAN MENU
            printf ("\t\t |                       MENU YANG ANDA PILIH ADALAH 'TABUNGAN'                     | \n");
            printf ("\t\t +----------------------------------------------------------------------------------+ \n");

            printf ("\t\t +----------------------------------------------------------------------------------+ \n");
            printf ("\t\t |     1. Cek Saldo                                                                 | \n");
            printf ("\t\t |     2. Tarik Tunai                                                               | \n");
            printf ("\t\t |     3. Transfer                                                                  | \n");
            printf ("\t\t |     4. Setor Tunai                                                               | \n");
            printf ("\t\t |     5. Pembayaran                                                                | \n");
            printf ("\t\t +----------------------------------------------------------------------------------+ \n");
            printf ("\n\t\t      ~ Masukkan Nomor Untuk Memilih: ");
            scanf ("%d", &pilihan); // INPUT PILIHAN YANG DITUJU

switch (pilihan){ // PERCABANGAN

case 1 : // CEK SALDO

    printf ("\n\t\t +----------------------------------------------------------------------------------+ \n");
    printf ("\t\t |                      JUMLAH SALDO ANDA SELURUHNYA ADALAH %d                | \n", saldo);
    printf ("\t\t +----------------------------------------------------------------------------------+ \n\n");

konfirmasi: // KONFIRMASI

   printf ("\t\t Apakah Anda Ingin Melakukan Transaksi Kembali? \n\n");
   printf ("\t\t 1. IYA\n");
   printf ("\t\t 2. TIDAK\n\n");
   printf ("\t\t Pilih Angka Yang Anda Inginkan : ");
   scanf ("%d", &ulangi);

printf ("\t +--------------------------------------------------------------------------------------------------+ \n");
system ("cls");

    if ( ulangi == 1 ){ // PERCABANGAN
        goto menu;
    }

    else if ( ulangi == 2 ){

        printf ("\t\t +----------------------------------------------------------------------------------+ \n");
        printf ("\t\t |                                  TERIMA KASIH                                    | \n");
        printf ("\t\t |                      TELAH MENGUNJUNGI ATM SUMBER MAKMUR                         | \n");
        printf ("\t\t |                      SELAMAT MENJALANKAN AKTIVITAS ANDA                          | \n");
        printf ("\t\t |                         ^^^DAN HATI-HATI DIJALAN^^^                              | \n");
        printf ("\t\t +----------------------------------------------------------------------------------+ \n\n");

    }

    else{

        printf ("\t\t +----------------------------------------------------------------------------------+ \n");
        printf ("\t\t |                                 INPUT INVALID !!                                 | \n");
        printf ("\t\t +----------------------------------------------------------------------------------+ \n");
        printf ("\t\t |             ^^^MASUKKAN/PILIH YANG SESUAI DENGAN APA YANG ADA DI MENU !^^^       | \n");
        printf ("\t\t +----------------------------------------------------------------------------------+ \n");
printf ("\t +--------------------------------------------------------------------------------------------------+ \n\n");

        goto menu; // MEMANGGIL TAMPILAN PILIHAN MENU
    }

break;


case 2: // TARIK TUNAI (AMBIL UANG)

    printf ("\n\t\t +----------------------------------------------------------------------------------+ \n");
    printf ("\t\t |     1.) 100.000                                                                  | \n");
    printf ("\t\t |     2.) 150.000                                                                  | \n");
    printf ("\t\t |     3.) 1.000.000                                                                | \n");
    printf ("\t\t |     4.) 1.500.000                                                                | \n");
    printf ("\t\t |     5.) 2.000.000                                                                | \n");
    printf ("\t\t +----------------------------------------------------------------------------------+ \n\n");
    printf ("\n\t\t     ~ Pilih Nominal Yang Ingin Anda Tarik : ");
    scanf ("%d", &nominal_uang);

system ("cls");

    if (nominal_uang == 1){ // PERCABANGAN LEBIH DARI 2 KONDISI

            printf ("\t\t +----------------------------------------------------------------------------------+ \n");
            printf ("\t\t |                          Tabungan Anda Terpotong 100.000                         | \n");
            saldo = 50000000-100000;
            printf ("\t\t |                                TRANSAKSI BERHASIL !                              | \n");
            printf ("\t\t |                              Sisa saldo anda %d                            | \n", saldo);
            printf ("\t\t +----------------------------------------------------------------------------------+ \n\n");
            goto konfirmasi; // MEMANGGIL TAMPILAN ULANGI (IYA/TIDAK)

        }

    else if (nominal_uang == 2){

            printf ("\t\t +----------------------------------------------------------------------------------+ \n");
            printf ("\t\t |                          Tabungan Anda Terpotong 150.000                         | \n");
            saldo = 50000000-150000;
            printf ("\t\t |                                TRANSAKSI BERHASIL !                              | \n");
            printf ("\t\t |                              Sisa saldo anda %d                            | \n", saldo);
            printf ("\t\t +----------------------------------------------------------------------------------+ \n\n");
            goto konfirmasi;

        }

    else if (nominal_uang == 3){

            printf ("\t\t +----------------------------------------------------------------------------------+ \n");
            printf ("\t\t |                          Tabungan Anda Terpotong 1.000.000                       | \n");
            saldo = 50000000-1000000;
            printf ("\t\t |                                TRANSAKSI BERHASIL !                              | \n");
            printf ("\t\t |                              Sisa saldo anda %d                            | \n", saldo);
            printf ("\t\t +----------------------------------------------------------------------------------+ \n\n");
            goto konfirmasi;

        }

    else if (nominal_uang == 4){

            printf ("\t\t +----------------------------------------------------------------------------------+ \n");
            printf ("\t\t |                          Tabungan Anda Terpotong 1.500.000                       | \n");
            saldo = 50000000-1500000;
            printf ("\t\t |                                TRANSAKSI BERHASIL !                              | \n");
            printf ("\t\t |                              Sisa saldo anda %d                            | \n", saldo);
            printf ("\t\t +----------------------------------------------------------------------------------+ \n\n");
            goto konfirmasi;

        }

    else if (nominal_uang == 5){

            printf ("\t\t +----------------------------------------------------------------------------------+ \n");
            printf ("\t\t |                          Tabungan Anda Terpotong 2.000.000                       | \n");
            saldo = 50000000-2000000;
            printf ("\t\t |                                TRANSAKSI BERHASIL !                              | \n");
            printf ("\t\t |                              Sisa saldo anda %d                            | \n", saldo);
            printf ("\t\t +----------------------------------------------------------------------------------+ \n\n");
            goto konfirmasi;

        }

    else {

        printf ("\t\t +----------------------------------------------------------------------------------+ \n");
        printf ("\t\t |                           MOHON MASUKKAN PILIHAN DENGAN BENAR !                  | \n");
        printf ("\t\t +----------------------------------------------------------------------------------+ \n\n");
        goto menu;
    }

    goto menu;
    break;


case 3: // TRANSFER

system ("cls");

    printf ("\t\t +----------------------------------------------------------------------------------+ \n");
    printf ("\t\t  Masukkan Nomor Rekening Yang Dituju : ");
    scanf ("%d", &rekening_yang_dituju);
    printf ("\t\t  Masukkan Jumlah Nominal : ");
    scanf ("%d", &transfer);
    printf ("\t\t +----------------------------------------------------------------------------------+ \n");

    if (saldo > transfer){ // PERCABANGAN 2 KONDISI

            printf ("\t\t +----------------------------------------------------------------------------------+ \n");
            printf ("\t\t |                         SELAMAT TRANSAKSI ANDA BERHASIL!                         | \n");
            saldo = 50000000 - transfer;
            printf ("\t\t |                           Sisa Saldo Anda : %d                             | \n");
            printf ("\t\t +----------------------------------------------------------------------------------+ \n\n");
            goto konfirmasi;
        }

        else (saldo < transfer);
        {

            saldo = transfer - 50000000;
            printf ("\t\t +----------------------------------------------------------------------------------+ \n");
            printf ("\t\t |                        Mohon Maaf Saldo Anda Tidak Mencukupi                     | \n");
            printf ("\t\t +----------------------------------------------------------------------------------+ \n\n");
            goto konfirmasi;
        }


        break;


case 4: // SETOR TUNAI (NABUNG)

system ("cls");

    printf ("\t\t +----------------------------------------------------------------------------------+ \n");
    printf ("\t\t ~ Masukkan Nominal Yang Ingin Anda Setorkan : ");
    scanf ("%d", &setor_tunai);
    printf ("\t\t +----------------------------------------------------------------------------------+ \n");
    saldo = 50000000 + setor_tunai;
    printf ("\t\t +----------------------------------------------------------------------------------+ \n");
    printf ("\t\t |                     Jumlah Saldo Anda Saat Ini Adalah %d                   | \n", saldo);
    printf ("\t\t +----------------------------------------------------------------------------------+ \n\n");

    goto konfirmasi;
    break;


case 5: // PEMBAYARAN (KPR,KREDIT,PDAM,PLN,BPJS)

system ("cls");

pembayaran:

    printf ("\t\t +----------------------------------------------------------------------------------+ \n");
    printf ("\t\t |      1. KPR                                                                      | \n");
    printf ("\t\t |      2. KREDIT                                                                   | \n");
    printf ("\t\t |      3. PDAM                                                                     | \n");
    printf ("\t\t |      4. PLN                                                                      | \n");
    printf ("\t\t |      5. BPJS                                                                     | \n");
    printf ("\t\t +----------------------------------------------------------------------------------+ \n\n");
    printf ("\t\t Silahkan Pilih Yang Ingin Anda Bayar = ");
    scanf ("%d", &pembayaran);

    switch (pembayaran){

            case (1) : // KPR

            printf ("\n\t\t +----------------------------------------------------------------------------------+ \n");
            printf ("\t\t |                              ANDA AKAN MEMBAYAR KPR                              | \n");
            printf ("\t\t +----------------------------------------------------------------------------------+ \n\n");
            printf ("\t\t Masukkan Jumlah Uang Yang Akan Dibayarkan = ");
            scanf  ("%d", &pembayaran);
            saldo = 50000000 - pembayaran;
            printf ("\n\t\t +----------------------------------------------------------------------------------+ \n");
            printf ("\t\t |                  Maka jumlah saldo anda sekarang adalah %d                 | \n",saldo );
            printf ("\t\t +----------------------------------------------------------------------------------+ \n\n");
            goto konfirmasi;
            break;


            case (2) : // KREDIT ATAU MEMBAYAR CICILAN
cicilan:

            printf ("\n\t\t +----------------------------------------------------------------------------------+ \n");
            printf ("\t\t |                          SILAHKAN PILIH YANG INGIN ANDA BAYAR                    | \n");
            printf ("\t\t +----------------------------------------------------------------------------------+ \n");
            printf ("\t\t |     1.) Cicilan Mobil                                                            | \n");
            printf ("\t\t |     2.) Cicilan Motor                                                            | \n");
            printf ("\t\t |     3.) Cicilan Perabotan Rumah                                                  | \n");
            printf ("\t\t |     4.) Cicilan Barang Elektronik                                                | \n");
            printf ("\t\t |     5.) Cicilan lainnya                                                          | \n");
            printf ("\t\t +----------------------------------------------------------------------------------+ \n");
            printf ("\n\n\t\t     ~ Silahkan Pilih Yang Anda Inginkan = ");
            scanf  ("%d", &cicilan);

                        switch (cicilan){

                        case (1) : // BAYAR CICILAN MOBIL
                        {

                            system ("cls");
                            printf ("\t\t +----------------------------------------------------------------------------------+ \n");
                            printf ("\t\t |                           ANDA AKAN MEMBAYAR CICILAN MOBIL                       |  \n");
                            printf ("\t\t +----------------------------------------------------------------------------------+ \n");
                            printf ("\n\t\t      ~ Masukkan Nominal Yang Akan Anda Bayarkan = ");
                            scanf ("%d", &cicilan);
                            saldo = 50000000 - cicilan;
                            printf ("\n\t\t +----------------------------------------------------------------------------------+ \n");
                            printf ("\t\t |                             Sisa Saldo Anda Adalah %d                      |\n", saldo);
                            printf ("\t\t +----------------------------------------------------------------------------------+ \n\n");
                            goto konfirmasi;
                            break;
                        }


                        case (2) : // BAYAR CICILAN MOTOR
                        {

                            system ("cls");
                            printf ("\t\t +----------------------------------------------------------------------------------+ \n");
                            printf ("\t\t |                         ANDA AKAN MEMBAYAR CICILAN MOTOR                         | \n");
                            printf ("\t\t +----------------------------------------------------------------------------------+ \n");
                            printf ("\t\t      ~ Masukkan Nominal Yang Akan Anda Bayarkan = ");
                            scanf ("%d", &cicilan);
                            saldo = 50000000 - cicilan;
                            printf ("\n\t\t +----------------------------------------------------------------------------------+ \n");
                            printf ("\t\t |                         Sisa Saldo Anda Adalah %d                          | \n", saldo);
                            printf ("\t\t +----------------------------------------------------------------------------------+ \n\n");
                            goto konfirmasi;
                            break;
                        }


                        case (3) : // BAYAR CICILAN PERABOTAN RUMAH (IKEA,ACE)
                        {

                            system ("cls");
                            printf ("\t\t +----------------------------------------------------------------------------------+ \n");
                            printf ("\t\t |                     ANDA AKAN MEMBAYAR CICILAN PERABOTAN RUMAH                   | \n");
                            printf ("\t\t +----------------------------------------------------------------------------------+ \n");
                            printf ("\t\t      ~ Masukkan Nominal Yang Akan Anda Bayarkan = ");
                            scanf ("%d", &cicilan);
                            saldo = 50000000 - cicilan;
                            printf ("\n\t\t +----------------------------------------------------------------------------------+ \n");
                            printf ("\t\t |                         Sisa Saldo Anda Adalah %d                          | \n", saldo);
                            printf ("\t\t +----------------------------------------------------------------------------------+ \n\n");
                            goto konfirmasi;
                            break;
                        }


                        case (4) : // BAYAR CICILAN BARANG ELEKTRONIK (HP)
                        {

                            system ("cls");
                            printf ("\t\t +----------------------------------------------------------------------------------+ \n");
                            printf ("\t\t |                    ANDA AKAN MEMBAYAR CICILAN BARANG ELEKTRONIK                  | \n");
                            printf ("\t\t +----------------------------------------------------------------------------------+ \n");
                            printf ("\t\t      ~ Masukkan Nominal Yang Akan Anda Bayarkan = ");
                            scanf ("%d", &cicilan);
                            saldo = 50000000 - cicilan;
                            printf ("\n\t\t +----------------------------------------------------------------------------------+ \n");
                            printf ("\t\t |                        Sisa Saldo Anda Adalah %d                           | \n", saldo);
                            printf ("\t\t +----------------------------------------------------------------------------------+ \n\n");
                            goto konfirmasi;
                            break;
                        }


                        case (5) : // BAYAR CICILAN BARANG LAINNYA (BAJU,TAS,MAKANAN,DLL)
                        {

                            system ("cls");
                            printf ("\t\t +----------------------------------------------------------------------------------+ \n");
                            printf ("\t\t |                         ANDA AKAN MEMBAYAR CICILAN LAINNYA                       | \n");
                            printf ("\t\t +----------------------------------------------------------------------------------+ \n");
                            printf ("\t\t      ~ Masukkan Nominal Yang Akan Anda Bayarkan = ");
                            scanf ("%d", &cicilan);
                            saldo = 50000000 - cicilan;
                            printf ("\n\t\t +----------------------------------------------------------------------------------+ \n");
                            printf ("\t\t |                         Sisa Saldo Anda Adalah %d                          | \n", saldo);
                            printf ("\t\t +----------------------------------------------------------------------------------+ \n\n");
                            goto konfirmasi;
                            break;
                        }


                        default : // DEFAULT PUNYANYA CICILAN
                            system ("cls");
                            printf ("\n\n\t\t +----------------------------------------------------------------------------------+ \n");
                            printf ("\t\t |                 SILAHKAN PILIH NOMOR YANG SESUAI PADA MENU CICILAN !             | \n");
                            printf ("\t\t +----------------------------------------------------------------------------------+ \n\n");
                            goto cicilan;
                            break;

                                }


            case (3) : // PDAM

            printf ("\n\t\t +----------------------------------------------------------------------------------+ \n");
            printf ("\t\t |                             ANDA AKAN MEMBAYAR PDAM                              | \n");
            printf ("\t\t +----------------------------------------------------------------------------------+ \n\n");
            printf ("\n\t\t Masukkan Jumlah Uang Yang Akan Dibayarkan = ");
            scanf  ("%d", &pembayaran);
            saldo = 50000000 - pembayaran;
            printf ("\n\t\t +----------------------------------------------------------------------------------+ \n");
            printf ("\t\t |                   Maka jumlah saldo anda sekarang adalah %d                | \n",saldo );
            printf ("\t\t +----------------------------------------------------------------------------------+ \n\n");
            goto konfirmasi;
            break;


            case (4) : // PLN

            printf ("\n\t\t +----------------------------------------------------------------------------------+ \n");
            printf ("\t\t |                             ANDA AKAN MEMBAYAR PLN                               | \n");
            printf ("\t\t +----------------------------------------------------------------------------------+ \n\n");
            printf ("\n\t\t Masukkan Jumlah Uang Yang Akan Dibayarkan = ");
            scanf  ("%d", &pembayaran);
            saldo = 50000000 - pembayaran;
            printf ("\n\t\t +----------------------------------------------------------------------------------+ \n");
            printf ("\t\t |                   Maka jumlah saldo anda sekarang adalah %d                | \n",saldo );
            printf ("\t\t +----------------------------------------------------------------------------------+ \n\n");
            goto konfirmasi;
            break;


            case (5) : // BPJS

            printf ("\n\t\t +----------------------------------------------------------------------------------+ \n");
            printf ("\t\t |                             ANDA AKAN MEMBAYAR BPJS                              | \n");
            printf ("\t\t +----------------------------------------------------------------------------------+ \n\n");
            printf ("\n\t\t Masukkan Jumlah Uang Yang Akan Dibayarkan = ");
            scanf  ("%d", &pembayaran);
            saldo = 50000000 - pembayaran;
            printf ("\n\t\t +----------------------------------------------------------------------------------+ \n");
            printf ("\t\t |                   Maka jumlah saldo anda sekarang adalah %d                | \n",saldo );
            printf ("\t\t +----------------------------------------------------------------------------------+ \n\n");
            goto konfirmasi;
            break;

            default : // DEFAULT PUNYANYA PEMBAYARAN

            printf ("\t\t +----------------------------------------------------------------------------------+ \n");
            printf ("\t\t |                        ^^^SILAHKAN PILIH YANG ADA DIPILIHAN^^^                   | \n");
            printf ("\t\t +----------------------------------------------------------------------------------+ \n\n");

            goto pembayaran;
            system ("cls");
            break;
        }

default : // DEFAULT PUNYANYA MENU

system ("cls");
printf ("\t\t +----------------------------------------------------------------------------------+ \n");
printf ("\t\t |                  ^^^SILAHKAN PILIH NOMOR YANG ADA PADA TAMPILAN^^^               | \n");
printf ("\t\t +----------------------------------------------------------------------------------+ \n\n");
goto menu;
system ("cls");

break;

        }

    return 0;
}
