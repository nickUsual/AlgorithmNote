#include<bits/stdc++.h>
using namespace std;
using gg = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    /*定义两个长整型的数字*/
    gg ni,ai;
    map<gg,gg> mi;
    cin >> ni;
    //统计数字出现的次数，用map容器进行统计
    while (ni--){
        cin >> ai;
        ++mi[ai];
        /* code */
    }
    for(auto i:mi){
        cout << "first = " << i.first << "second = " << i.second <<  endl;
    }
    //之后用max_element()函数统计数字出现最多的
    cout << max_element(mi.begin(),mi.end(),[](const pair<gg,gg>& p1,const pair<gg,gg>& p2){
       //返回第二个数值的比较结果
       return  p1.second < p2.second;
    })->first;
    
    system("pause");
    return 0;
}   
