// #include <stdio.h>

// int main(){

//     int totalBelanja, Member, Saldo, Diskon, HargaAkhir, pengurangan_saldo;

//     printf("===============================\n");
//     printf("selamat datang di toko barang kami \n");
//     printf("masukan total belanja anda :");
//     scanf("%d", &totalBelanja);
//     printf("Masukan saldo anda :");
//     scanf("%d", &Saldo);
    

//     if(totalBelanja >= 100000){
//         printf("apakah anda member ? (1.ya / 2.tidak) :");
//         scanf("%d", &Member);
        

//         if(Member == 1){

//             printf("Selamat anda mendapatkan diskon 10 persen \n");

//             if(Saldo >= totalBelanja){

//             Diskon = 10 * totalBelanja / 100;
//             HargaAkhir = totalBelanja - Diskon;
//             pengurangan_saldo = Saldo - HargaAkhir;
            
//             printf("total belanja anda adalah : %d \n", totalBelanja);
//             printf("saldo anda adalah : %d \n", Saldo);
//             printf("diskon anda adalah : %d \n", Diskon);
//             printf("harga setelah diskon anda adalah : %d \n", HargaAkhir);            
//             printf("saldo anda sekarang adalah : %d \n", pengurangan_saldo);

//             }else{
//                 printf("total belanja anda adalah : %d \n", totalBelanja);
//                 printf("saldo anda tidak cukup untuk melakukan pembayaran \n");
//             }
            
//         }else{
//             printf("anda tidak mendapatkan diskon \n");

//             if(Saldo >= totalBelanja){

//             pengurangan_saldo = Saldo - totalBelanja;          
//             printf("total belanja anda adalah : %d \n", totalBelanja);
//             printf("saldo anda adalah : %d \n", Saldo);
//             printf("saldo anda sekarang adalah : %d \n", pengurangan_saldo);

//             }else{
//                 printf("total belanja anda adalah : %d \n", totalBelanja);
//                 printf("saldo anda tidak cukup untuk melakukan pembayaran \n");
//             }
            
//         }

//     }else{
//         printf("minimal belanja anda harus 100000 \n");
//     }


//     return 0;
// }


#include <stdio.h>

int main() {

    int totalBelanja;
    int Member;
    int Saldo;
    int Diskon;
    int HargaAkhir;
    int sisaSaldo;

    printf("===============================\n");
    printf("Selamat datang di toko barang kami\n");

    printf("Masukan total belanja anda : ");
    scanf("%d", &totalBelanja);

    printf("Masukan saldo anda : ");
    scanf("%d", &Saldo);

    if (totalBelanja >= 100000) {

        printf("Apakah anda member? (1. Ya / 0. Tidak) : ");
        scanf("%d", &Member);

        if (Member == 1) {

            printf("Selamat anda mendapatkan diskon 10 persen\n");

            // Hitung diskon
            Diskon = 10 * totalBelanja / 100;

            // Hitung harga setelah diskon
            HargaAkhir = totalBelanja - Diskon;

            // Baru cek saldo
            if (Saldo >= HargaAkhir) {

                sisaSaldo = Saldo - HargaAkhir;

                printf("Total belanja anda : %d\n", totalBelanja);
                printf("Saldo anda : %d\n", Saldo);
                printf("Diskon anda : %d\n", Diskon);
                printf("Harga setelah diskon : %d\n", HargaAkhir);
                printf("Sisa saldo anda : %d\n", sisaSaldo);

            } else {

                printf("Harga yang harus dibayar : %d\n", HargaAkhir);
                printf("Saldo anda tidak cukup\n");
            }

        } else {

            printf("Anda tidak mendapatkan diskon\n");

            HargaAkhir = totalBelanja;

            if (Saldo >= HargaAkhir) {

                sisaSaldo = Saldo - HargaAkhir;

                printf("Total belanja anda : %d\n", totalBelanja);
                printf("Saldo anda : %d\n", Saldo);
                printf("Sisa saldo anda : %d\n", sisaSaldo);

            } else {

                printf("Saldo anda tidak cukup untuk melakukan pembayaran\n");
            }
        }

    } else {

        printf("Minimal belanja anda harus Rp100000\n");
    }

    return 0;
}