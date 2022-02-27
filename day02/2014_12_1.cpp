#include<bits/stdc++.h>
using namespace std;
using gg = long long;
int main(){
    map<gg,gg> ai;
    vector<gg> count;
    gg N,temp_num;
    cin >>N;
    while(N--){
        cin>>temp_num;
        count.push_back(++ai[temp_num]);
    }
    for(auto i : count){
        cout << i << " ";
    }

    return 0;
}