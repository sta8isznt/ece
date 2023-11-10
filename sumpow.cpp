#include <iostream>  
using namespace std;  
  
int pow(int x,int p) {  
    int i, power = 1;  
    for(i=0;i<=p-1;i++) {  
        power = power*x; }  
    return power;  
}  
  
int main(){  
   int p[10][10];  
   int a,b,c,d,e,f,g,h,total,N,sum,i,j;  
  
   cin>>N;  
   for(i=0;i<=9;i++){  
       for(j=0;j<=9;j++){  
           p[i][j] = pow(i,N)+pow(j,N);  
       }  
   }  
  
   for(a=0;a<=9;a++){  
       for(b=0;b<=9;b++){  
           for(c=0;c<=9;c++){  
               for(d=0;d<=9;d++){  
                   for(e=0;e<=9;e++){  
                       for(f=0;f<=9;f++){  
                           for(g=0;g<=9;g++){  
                               for(h=0;h<=9;h++){  
    total = a*10000000+b*1000000+c*100000+d*10000+e*1000+f*100+g*10+h;  
    sum = p[a][b]+p[c][d]+p[e][f]+p[g][h];  
  
    if (total == sum)  
        cout<<total<<endl;  
                               }  
                               }  
                       }  
                   }  
               }  
           }  
       }  
   }  
return 0;  
}  