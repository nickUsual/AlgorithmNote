#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a = 1,sum = 0;
    while(a <= 100){
        sum += a;
        a++;
    }
    cout << sum;
    getchar();
    return 0;
}