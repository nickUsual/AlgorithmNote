#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,a,b,c;
    cin >> N;
    a = N / 50;
    N = N % 50;
    b = N / 30;
    N = N % 30;
    c = N / 10;
    cout << 7 * a + 4 * b + c;
    
    system("pause");
    return 0;
}