#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << fixed << setprecision(2);
    cout << "Arithmetic Mean = " << B[0] << endl;
    cout << "Standard Deviation = " << B[1] << endl;
    cout << "Geometric Mean = " << B[2] << endl;
    cout << "Harmonic Mean = " << B[3] << endl;
    cout << "Max = " << B[4] << endl;
    cout << "Min = " << B[5];
    return 0;
}

void stat(const double a[], int x, double b[]){
    double sum = 0;
    double sd = 0, gm = 1, hm = 0;
    double max = a[0], min = a[0];
    for(int i = 0; i < x; i++){ 
        sum += a[i];}
        sum = sum/x;
    b[0] = sum;
    for(int i = 0; i < x; i++){
        sd += pow((a[i]-sum),2);}
        sd = sqrt(sd/x);
    b[1] = sd;
    for(int i = 0; i < x; i++){
       gm *= a[i];}
       gm = pow(gm,1.0/x);
    b[2] = gm;
    for(int i = 0; i < x; i++){
        hm += 1.0/a[i];}
        hm = x/hm;
    b[3] = hm;
    for(int i = 0; i < x; i++){
        if(a[i] > max) max = a[i];
        if(a[i] < min) min = a[i];}
    b[4] = max;
    b[5] = min;
}