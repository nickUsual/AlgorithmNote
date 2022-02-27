#include<bits/stdc++.h>
using namespace std;
//暴力解法
//求出当前的非零段的个数
int getZero(vector<int> ai){
    int count_num = 0;
    for(int i =0;i < ai.size();){
        while(ai[i] == 0) {
            if(i < ai.size()) i++;
            else return count_num;
        }
        count_num ++;
        while(ai[i] != 0){
            if(i < ai.size()) i++;
            else return count_num;
        }
    }
}
int main(){
    int N;
    cin >> N;
    vector<int> ai;
    for(int& i: ai){
        cin >> i;
    }
    //从小到大排序
    sort(ai.begin(),ai.end());
    system("pause");
    return 0;
}