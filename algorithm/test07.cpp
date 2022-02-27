#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    double a,b;
    scanf("%lf%lf",&a,&b);
    printf("%.2f %.2f",a < b ? a:b,a > b ? a:b);
    getchar();
    return 0;
}