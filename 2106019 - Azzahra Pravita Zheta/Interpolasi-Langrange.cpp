
#include <stdio.h>
#include <iostream>
#include<conio.h>
using namespace std;

int main(void)
{
float xBar1,xBar2,xBar3,xBar4,hasil;
float x[100],f[100],l[100],hitung;
int n,i,j,k;
printf("\n\tMETODE LAGRANGE ");
printf("\n----------------------------------------------");
printf("\nMasukkan Jumlah Data : "); scanf("%i",&n);
printf("\n----------------------------------------------");
for(i=0;i<n;i++)
        {
        printf("\nMasukkan nilai x%i : ",i); scanf("%f",&x[i]);
        printf("Masukkan nilai y%i : ",i); scanf("%f",&f[i]);
        }
printf("\n----------------------------------------------");
printf("\nMasukkan nilai X1 : "); scanf("%f",&xBar1);
printf("\nMasukkan nilai X2 : "); scanf("%f",&xBar2);
printf("\nMasukkan nilai X3 : "); scanf("%f",&xBar3);
printf("\nMasukkan nilai X4 : "); scanf("%f",&xBar4);
printf("\n\n");
printf("Didapatkan titik X , Y adalah :\n ");
printf("\n");

for (i=0;i<n;i++)
        {
        cout <<"["<<x[i]<<"\t]\t["<<f[i]<<"\t]"<<endl;
        }
        
printf("dengan nilai X1 = %.2f ",xBar1);
hasil=(f[0]*((xBar1-x[1])/(x[0]-x[1]))*((xBar1-x[2])/(x[0]-x[2])))+(f[1]*((xBar1-x[0])/(x[1]-x[0]))*((xBar1-x[2])/(x[1]-x[2])))+(f[2]*((xBar1-x[0])/(x[2]-x[0]))*((xBar1-x[1])/(x[2]-x[1])));
printf("\nMaka nilai Y untuk X yang dicari : %.3f",xBar1);
printf("\tadalah : %.3f",hasil);

printf("\n\ndengan nilai X2 = %.2f ",xBar2);
hasil=(f[0]*((xBar2-x[1])/(x[0]-x[1]))*((xBar2-x[2])/(x[0]-x[2])))+(f[1]*((xBar2-x[0])/(x[1]-x[0]))*((xBar2-x[2])/(x[1]-x[2])))+(f[2]*((xBar2-x[0])/(x[2]-x[0]))*((xBar2-x[1])/(x[2]-x[1])));
printf("\nMaka nilai Y untuk X yang dicari : %.3f",xBar2);
printf("\tadalah : %.3f",hasil);

printf("\n\ndengan nilai X3 = %.2f ",xBar3);
hasil=(f[0]*((xBar3-x[1])/(x[0]-x[1]))*((xBar3-x[2])/(x[0]-x[2])))+(f[1]*((xBar3-x[0])/(x[1]-x[0]))*((xBar3-x[2])/(x[1]-x[2])))+(f[2]*((xBar3-x[0])/(x[2]-x[0]))*((xBar3-x[1])/(x[2]-x[1])));
printf("\nMaka nilai Y untuk X yang dicari : %.3f",xBar3);
printf("\tadalah : %.3f",hasil);

printf("\n\ndengan nilai X4 = %.2f ",xBar4);
hasil=(f[0]*((xBar4-x[1])/(x[0]-x[1]))*((xBar4-x[2])/(x[0]-x[2])))+(f[1]*((xBar4-x[0])/(x[1]-x[0]))*((xBar4-x[2])/(x[1]-x[2])))+(f[2]*((xBar4-x[0])/(x[2]-x[0]))*((xBar4-x[1])/(x[2]-x[1])));
printf("\nMaka nilai Y untuk X yang dicari : %.3f",xBar4);
printf("\tadalah : %.3f",hasil);
getch();
return(0);
}
