#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,L;
    cin >> n >> m >> L;
    vector<int> ai(L);
    //vector的初始值被赋值为0;
    int tem_num,N=n*m;
    while(N--){
        cin >> tem_num;
        ai[tem_num]++;
    }
    for(auto i:ai){
        cout << i <<" ";
    }


    system("pause");
    return 0;
}