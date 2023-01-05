//Sania Farhat (2103625)

#include<stdio.h>
#include<conio.h>

void main(){

    float x[100], y[100];
    float xp, yp=0, p;
	int i,j,totalSampel;

    // Scan total sampel yang akan digunakan
    printf("Masukan jumlah sampel : ");
    scanf("%d", &totalSampel);

    // Perulangan input sesuai jumlah sampel yang sebelumnya dimasukan
    printf("Masukan jumlah data  :\n");
    for(i=1;i<=totalSampel;i++){
       
        printf("x ke-%d = ", i-1); // Menginput x ke-n
        scanf("%f", &x[i]);
        
        printf("yke-%d = ", i-1);  // Menginput y ke-n
        scanf("%f", &y[i]);
    }

    // Menginput nilai yang akan dicari hampiran y nya
    printf("Enter interpolation point: ");
    scanf("%f", &xp);

    // Proses hitung

    // Perulangan pertama untuk mengulang penjumlahan satu nilai interpolasi yang kemudian nilainya akan disimpan di variabel yp
    for(i=1;i<=totalSampel;i++){

        // Variabel p digunakan untuk menampung total kalkulasi per sampel 
        // Inisialisasi nilai p = 1 agar setiap pengulangan nilai p kembali menjadi 1
        p=1;

        // Perulangan kedua untuk kalkulasi setiap berdasarkan derajatnya dalam perulangan pertama 
        for(j=1;j<=totalSampel;j++){
            if(i!=j){
                // Menampung nilai perhitungan di p
                p = p* (xp - x[j])/(x[i] - x[j]);
            }
        }
        // variabel yp digunakan untuk menampung total hitung dari setiap perulangan
        yp = yp + p * y[i];
    }
    // print nilai akhir interpolasi
    printf("Nilai interpolasi dar %.3f adalah %.3f", xp, yp);
    getch();
}
