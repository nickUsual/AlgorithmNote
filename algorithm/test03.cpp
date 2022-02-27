#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    double a,b,c,temp;
    scanf("%lf%lf%lf",&a,&b,&c);
    temp = sqrt(b*b-4*a*c);
    printf("r1=%7.2f",(-b+temp)/(2*a));
    printf("\nr2=%7.2f\n",(-b-temp)/(2*a)); 
    getchar();
    return 0;
}