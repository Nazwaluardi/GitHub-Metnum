#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

void reimann(float n, float a,float b){
	float h = (b-a)/n;
	float l;
	float sum=0;
	float x=0;
	for(int i=0;i<=n;i++)
	{
		sum = sum + (x*x);
		x = h+x;
	}
	l = h*sum;
	printf("Nilai h = %f dan Nilai L =%f\n", h, l);
}

int main(){
	printf("Metode Reimann\n");
	reimann(10, 0, 1);
	reimann(20, 0, 1);
	reimann(30, 0, 1);
	reimann(50, 0, 1);
	reimann(100, 0, 1);
	reimann(1000, 0, 1);
	reimann(10000, 0, 1);
	printf("\n");


}
