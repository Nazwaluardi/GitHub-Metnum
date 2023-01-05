// Sania Farhat (2103625)
// Newton Raphson

#include <stdio.h>
#include <stdlib.h>
#include <math.h> //perhitungan matematika

double newton(double guess, double sub_zero, int max, double e);

main(){
    double guess, sub_zero, e;
    int max;
    
    //input user
    printf("Masukan tebakan awal: ");
    scanf("%lf", &guess);
    printf("Masukan nilai dari C: ");
    scanf("%lf", &sub_zero);
    printf("Masukan jumlah iterasi maksimal: ");
    scanf("%d", &max);
    printf("Masukan eror maksimum: ");
    scanf("%lf", &e);
    
    printf("\n Solusi \n");
    
    //pemanggilan fungsi newton
    newton(guess, sub_zero, max, e);
    
    system("pause");
    return 0;
}

double newton(double guess, double sub_zero, int max, double e){
    //deklarasi variabel
    double y = guess, fx;
    int count = 0;
    
    //pengulangan sampai hitungan kurang dari input pengguna "max"
    while(count < max){
        //pengulangan keluar ketika |f(x)| < e
        if(fabs(fx) < e){
                break;
        }
        //jika tidak, melakukan rumus newton dan f(x).
        else{
                fx = (pow(y,4)-sub_zero);
                y = y - (pow(y,4)-sub_zero)/(4*pow(y,3));
        
                ++count;
        }
    }
    
    //output
    printf("\n Root: %f", y);
    printf("\n Nilai dari f(x) adalah: %f", fx);
    printf("\n Total iterasi adalah: %d", count);
    
    return y, fx, count;
}
