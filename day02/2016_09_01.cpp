#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,tem_num;
    cin >> N;
    vector<int> ai(N);
    vector<int> bi;
    cin >> ai[0];
    for(int i =1;i < N;i++){
        cin >> ai[i];
        tem_num = abs(ai[i] - ai[i-1]);
        bi.push_back(tem_num);
    }
    cout << *max_element(bi.begin(),bi.end());

    //输出那一天的出现最大波动
   // cout << distance(bi.begin(),result) + 2;
    system("pause");
    return 0;
}