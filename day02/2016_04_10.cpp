#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,num,count = 0;
    cin >> N;
    vector<int> ai(N);
    vector<int> bi;
    for(int i =0;i < N;i++){
        cin >> ai[i];
    }
    for(int i = 1;i < N;i++){
        num = ai[i] - ai[i-1];
        bi.push_back(num);
    }
    for(int i =1;i < bi.size();i++ ){
        if(bi[i] * bi[i-1]  < 0){
            count ++;
        }
    }
    cout << count;
    system("pause");
    return 0;
}