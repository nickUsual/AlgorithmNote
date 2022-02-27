#include<bits/stdc++.h>
using namespace std;
using gg = long long;
int main(){
    vector<gg> ai;
    gg N,temp_num;
    cin >> N;
    while(N--){
        cin >> temp_num;
        ai.push_back(temp_num);
    }
    if(N == 1){
        cout <<  0 << endl;
        return 0;
    }
    gg count=0;
    sort(ai.begin(),ai.end());
    
    for (int  i = 0; i < ai.size() - 1; i++)
    {
        if(ai[i] == ai[i + 1] -1){
            count++;
        }
    }
    
    cout << count <<endl;;

    return 0;
}