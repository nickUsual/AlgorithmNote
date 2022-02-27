#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    double a,sum = 0;
    scanf("%lf",&a);
    if(a > 100000){
        sum += 100000 * 0.1;
        if(a > 200000){
            sum += 100000 * 0.075;
            if(a > 400000){
                sum += 200000 * 0.05;
                if(a > 600000){
                    sum += 200000 * 0.03;
                    if(a > 1000000){
                        sum += 400000 * 0.015 + (a - 1000000) * 0.01;
                        
                    }else{
                        sum += (a - 600000) * 0.015;
                    }
                }else{
                    sum += (a - 400000) * 0.03;
                }
            }else{
                sum +=(a - 200000) * 0.05;
            }
        }else{
            sum += (a - 100000) * 0.075;
        }
    }else{
        sum += a * 0.1;
    }
    printf("%.2f\n",sum);
    getchar();
    return 0;
}