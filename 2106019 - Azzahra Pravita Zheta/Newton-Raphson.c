
#include <stdio.h>
#include <math.h>
#include <conio.h>

float Fungsi(float x);
float FungsiTurunan(float x);

main()
{
int n=0;
float x[100];
float e = 0.0005;
printf("Persamaan Fungsi f(x) : 4x^3 - 15x^2 +17x - 6 = 0\n");
printf("\n");
printf("x(n+1) : x(n)-(f(xn)/f'(xn)) \n\n");
printf("Nilai e = 0.0005\n\n");
printf("Masukkan nilai x Awal : "); scanf("%f",&x[0]);
printf("| n   |   xn     |  f(xn)   |  f (xn) |  f(xn)/f (xn) |   x(n+)   |\n");

do
{
x[n+1] = x[n] - (Fungsi(x[n])/FungsiTurunan(x[n]));
printf("| %d  | %2.4f  | %2.4f | %2.4f | %2.4f | %2.4f |\n", n+1, x[n],Fungsi(x[n]), FungsiTurunan(x[n]),Fungsi(x[n])/FungsiTurunan(x[n]),x[n+1]);
n++;
}while(abs(x[n-1]-x[n-2])>e);
printf(" %d  | %2.4f  | %2.4f | %2.4f | %2.4f | %2.4f |\n", n+1, x[n],Fungsi(x[n]), FungsiTurunan(x[n]),Fungsi(x[n])/FungsiTurunan(x[n]),x[n+1]);
printf("Jadi, Hasil yang memenuhi dari persamaan tersebut x = %2.4f", x[n]);
getch();
}
float Fungsi(float x)
{
return (4*(x,3)-(15*(x,2))+(17*x)-6);
}

float FungsiTurunan(float x)
{
return 12*(x,2)-(30*x)+17;
}
