#include <iostream>
#include <string>

using namespace std;

int power(int x, int n){
    if (n == 1) return x;

    int res=power(x,n/2);
    res *= res;

    if (n % 2 == 1) res *= x;
    return res;
}

int main(){
    long long p[10];

    for (int i=0; i<10; ++i){
        p[i] = power(i,4);
        // cout << powers[i] << endl;
    }

    long long d[4] = {1,0,0,0};

    
    for (d[0] <=9; ++d[0];){
        for (d[1] <=9; ++d[1];){
            for(d[2]<=9; ++d[2];){
                for(d[3]<=9; ++d[3];){                  
                    long sum = p[d[0]]+p[d[1]]+p[d[2]]+p[d[3]];
                    long num = (d[0]*1000+d[1]*100+d[2]*10+d[3]);
                    if (sum == num) cout << num << endl;
                }
            }
        }
    }
}


