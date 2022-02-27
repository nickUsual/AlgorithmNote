#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    double a,b,c,temp;
    scanf("%lf%lf%lf",&a,&b,&c);
    if(a > b){
        temp = a;
        a = b;
        b = temp;
    }
    if(a > c){
        temp = a;
        a = c;
        c = temp;
    }
    if(b > c){
        temp = b;
        b = c ;
        c = temp;
    }
    printf("%.2f %.2f %.2f\n",a,b,c);
    getchar();
    return 0;
}