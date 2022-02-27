#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin >> N;
    vector<pair<int,int>> ai(N+1);
    vector<int> bi(N+2);
    vector<int> ci(N+2);
    for(int i =1;i< N+1;i++){
        cin >> ai[i].first;
        cin >> ai[i].second;
    }
    sort(ai.begin(),ai.end(),[](pair<int,int> p1,pair<int,int> p2){
        return p1.first < p2.first;
    });
    for(int i =1;i < N+1; i++){
        if(ai[i].second == 0) bi[i] = bi[i-1] + 1;
        else bi[i] = bi[i-1];
    }
    for(int i = N;i >= 1;--i){
        if(ai[i].second == 1) ci[i] = ci[i+1] +1;
        else ci[i] = ci[i +1];
    }
    int temp = 0,count =0;
    for(int i =1;i < N+1;i++){
        if(ai[i].first == ai[i-1].first) continue;
        //小于或者等于是向上取，取最大值
        if(count <= bi[i-1] + ci[i]){
            count = bi[i-1] + ci[i];
            temp = ai[i].first;
        }
    }
    cout << temp;
    system("pause");
    return 0;
}