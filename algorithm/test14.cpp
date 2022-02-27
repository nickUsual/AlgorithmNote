/*输入一个正整数n，求Fibonacci数列的第n个数。Fibonacci数列的特点：第1,2个数为1,1。从第3个数开始，概述是前面两个数之和。*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,num,a[60] ={};
    a[0] = 0,a[1] = 1;
    cin >> n;
    for(int i =2;i <= n;i++){
        a[i] = a[i-1] + a[i-2]; 
    }
    cout << a[n] <<endl;
    getchar();
    return 0;
}