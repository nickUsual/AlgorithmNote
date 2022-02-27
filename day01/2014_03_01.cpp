#include<bits/stdc++.h>
using namespace std;
using gg = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    //暴力破解
    gg N,ai;
    gg num = 0;
    map<gg,gg> down;
    cin >> N;
    while(N--){
        cin >> ai;
        num++;
        //在尾部加上对应的数值
        if(ai > 0) down[ai] = 1;
        else down[-ai] = 0;
    }
     num  = num - down.size();
    //将修改得到的数值与应该得到的数值进行相减
    cout << num<<endl;
    system("pause");
    return 0;
}