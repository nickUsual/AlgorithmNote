#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a,b,c,my_max;
    cin >> a >> b >> c;
    my_max = a > b ? a:b;
    my_max = my_max > c ? my_max:c;
    return 0;
}