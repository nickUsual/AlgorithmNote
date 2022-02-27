#include<bits/stdc++.h>
using namespace std;
int ai[610][610];
int bi[610][610];
int main(){
    int n,r,L,t;
    cin >> n >> L >> r >> t;
    int N = n * n;
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= n;j++){
            cin >> ai[i][j];
            bi[i][j] = bi[i-1][j] + bi[i][j-1] - bi[i-1][j-1] +ai[i][j];
        }
    }
    int num = 0,count = 0,temp =0;
    for(int i =1;i <= n;i++){
        for(int j =1;j <= n ;j++){
            int a = max(1,i - r), b = max(1,j - r);
            int c = min(n , i + r),d = min(n,j+r);
            num = bi[c][d] - bi[a-1][d] -bi[c][b-1] + bi[a-1][b-1];
            temp = (c-a + 1)*(d-b + 1) * t;  
            if(num <= temp) count ++;
        }
    }
    cout << count;
    system("pause");
    return 0;
}