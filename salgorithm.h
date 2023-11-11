#include <iostream>
#include <iomanip>

using namespace std;

int spower(int x, int n){
    //For exponent natural number
    if (n == 1) return x;

    int res=spower(x,n/2);
    res *= res;

    if (n % 2 == 1) res *= x;
    return res;
}

double spower(double x, double n){
    cout << fixed << setprecision(2);
    return 0;
}

int sgcd(int i,int j){
    if(i==0 || j==0)return i+j;
    else if (i > j) return sgcd(i%j,j);
    else return sgcd(j%i,i);
}

int sfib(int n){
    if (n == 0 || n == 1) return n;
    return sfib(n-1) + sfib(n-2);
}

double ssqrt(double x){
    //For x > 1
    double older, newer=(1+x)/2;
    double eps = 0.00001;
    do{
        older = newer;
        newer = (older + x/older)/2;
    }while(abs(newer-older) > eps);
    return newer;
}
